module IMP-SYNTAX
  syntax AExp ::= Int // builtin
                | Id  // builtin
                | String // builtin
                | "read" "(" ")"
                | "++" Id
                > left:
                  AExp "*" AExp [left]
                | AExp "/" AExp [left]
                > left:
                  AExp "+" AExp [left, strict]
                | AExp "-" AExp [left]
                | "(" AExp ")"  [bracket]

  syntax BExp ::= Bool // builtin
                | "!" BExp
                | BExp "&&" BExp [non-assoc]
                | AExp "<=" AExp [strict]
                | AExp "<"  AExp
                | "(" BExp ")" [bracket]

  syntax Block ::= "{" Stmt "}"
                 | "{" "}"

  syntax Stmt ::= Block
                | "int" Id ";"
                | "print" "(" AExp ")" ";" [strict]
                |Id "=" AExp ";"  [strict(2)]
                | "if" BExp Block "else" Block [strict(1)]
                | "while" BExp Block
                > Stmt Stmt [right]
endmodule

module IMP
  imports IMP-SYNTAX

  syntax KResult ::= Bool | Int | String

  configuration <k> $PGM:Stmt </k>
                <env> .Map </env>
                <store> .Map </store>
                <stack> .List </stack>
                <in stream="stdin"> .List </in>
                <out stream="stdout"> .List </out>
/*@simplerules*/
  rule I1:Int <= I2:Int => I1 <=Int I2
  rule I1:Int + I2:Int => I1 +Int I2

  rule S1:Stmt S2:Stmt => S1 ~> S2

  rule <k> int X:Id ; => . ...</k>
       <env> M:Map => M[X <- !L:Int] </env>
       <store> M':Map (.Map => !L |-> 0) </store>

   rule <k> (X:Id = V:Int ; => .)  ...</k>
        <env>... X |-> L:Int  ...</env>
        <store>... L |-> (_ => V) ...</store>

   rule <k> (X:Id => V) ...</k>
        <env>... X |-> L:Int ...</env>
        <store>... L |-> V:Int ...</store>

  rule if true  B1:Block else B2:Block => B1 
  rule if false B1:Block else B2:Block => B2 

  syntax KItem ::= "restoreEnv"

rule { } => .

  rule while B:BExp { S:Stmt } =>
       if B { S while B { S } } else { }

  //@increment


  //@read


  //@ print


endmodule
