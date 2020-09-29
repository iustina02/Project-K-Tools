#include<string.h>

char buffer[99999]="";

void scrie_buffer_int(int intreg)
{
	char buffer1[100];
	sprintf(buffer1,"%d",intreg);
	strcat(buffer,buffer1);
	strcat(buffer," ");
}

void scrie_buffer_char(char intreg[])
{
	char buffer1[100];
	sprintf(buffer1,"%s",intreg);
	strcpy(buffer1,intreg);
	strcat(buffer,buffer1);
	strcat(buffer,"\n");
}

void scrie_buffer_char_ns(char intreg[])
{
	char buffer1[99999];
	sprintf(buffer1,"%s",intreg);
	strcpy(buffer1,intreg);
	strcat(buffer,buffer1);
}

void scrie_comentariusintaxa()
{
	strcat(buffer,"\\newline\n\\textit{Syntax}\\newline\n\n \\qquad The K syntax of languages, calculi or systems, as well as the additional syntax needed for the semantics of these, is defined using context-free grammars (CFG) or, equivalently, algebraic signatures written using the mixfix notation (i.e., operation names include underscores as argument placeholders) [ 23 ,22,12]. We take the freedom to borrow from the algebraic universe any structures of interest on a by-need basis.  In this paper we use \\textit{List\\{Nonterminal,terminal\\}} to refer to the nonterminal corresponding to \\textit{terminal}-separated lists of \\textit{Non-terminal}elements; for example,\\textit{List\\{Exp,@\\}}stands for \\textit{@}-separated lists of expressions. We skip the terminal when it is a comma; e.g.,\\textit{List\\{Exp\\}}stands for comma-separated lists of expressions.\\newline\\newline\n");
}

void scrie_comentariusemantica()
{
strcat(buffer,"\\newline\\newline\n\\textit{Static semantics}\n\\newline\n\n\\qquad Here we define the type system of SIMPLE. Like concrete semantics, type systems defined in K are also executable.  However,K type systems turn into type checkers instead of interpreters when executed. The typing process is done in two (overlapping) phases.  In the first phase the global environment is built, which contains type bindings for all the globally declared variables and functions.  For functions, the declared types will be \\textit{trusted} during  the  first  phase  and  simply  bound  to  their  corresponding function names and placed in the global type environment.  At the same time, type-checking tasks that the function bodies indeed respect their claimed types are generated.  All these tasks are verified during the second phase.  This way, all the global variable and function declarations are available in the global type environment and can be used to type-check each function body.  This is consistent with the semantics of untyped SIMPLE, where functions can access all the global variables and can call any other function declared in the same program.  The two phases may overlap because of the K concurrent semantics. For example, a function task can be started while the first phase is still running; moreover, it may even complete before the first phase does, namely when all the global variables and functions that it needs have already been processed and made available in the global environment by the first phase task.\\newline\\newline\n");
}
void scrie_comentariuExp(){

strcat(buffer,"\n\\textit{Expressions}\n\\newline\n\n \\qquad The syntax of expressions is identical to that in untyped SIMPLE, except for  the  logical  conjunction  and  disjunction  which  have  different  strictness attributes, because they now have different evaluation strategies.\\newline\\newline\n");
}

void scrie_comentariuBlock(){
	strcat(buffer,"\n\\textit{Statements}\n\\newline\n\n \\qquad The statements have the same syntax as in untyped SIMPLE, except for the exceptions, which now type their parameter.  Unlike in untyped SIMPLE, all statement constructs which have arguments and are not desugared are strict, including the conditional and the while. Indeed, from a typing perspective,they are all strict: first type their arguments and then type the actual construct.\\newline\\newline\n");
}

void scrie_comentariuConfig(){
	strcat(buffer,"\\newline\\newline\n\n\\textit{Configuration}\n\\newline\n\n \\qquad The configuration of our type system consists of a tasks cell holding various typing task cells, and a global type environment.\\newline\\newline\n");
}

void scrie_comentariuSimpleR(){
	strcat(buffer,"\\newline\\newline\n\n\\textit{Common expression constructs}\n\\newline\n\n \\qquad The rules below are straightforward and self-explanatory:\\newline\\newline\n");
}

void scrie_comentariuInOut(){
	strcat(buffer,"\\newline\\newline\n\n\\textit{Input/Output}\n\\newline\n\n \\qquad The  read  expression  construct  types  to  an  integer,  while  print  types  to  a statement provided that all its arguments type to integers or strings.\\newline\\newline\n");
}

void scrie_comentariuClo(){
	strcat(buffer,"\\newline\\newline\n\n\\textit{Conclusion}\n\\newline\n\n \\qquad The K semantic framework,  consisting of a general-purpose concurrent rewriting approach together with a definitional technique specialized for con-current programming languages and systems, brings together the advantages of existing language definitional frameworks while avoiding their limitations. In spite of its youth, the K framework has already proven to be practical, as it has been used with relatively little effort to define complex languages like Java, Scheme, Verilog, or C, and to use those definitions for analyzing programs written in those languages. K is currently under heavy development, with bugs being fixed and new features and capabilities added on a regular basis.\\newline\\newline\n");
}

void scrie_buffer(char afisare[])
{
	strcat(buffer,afisare);
}


void printcomentariu(char x[])
{
    scrie_buffer_char(x);
    scrie_buffer("\\newline\n");
}

void printsintaxe(char x[])
{
    if((strcmp(x,"syntax AExp ::=")==0) || (strcmp(x,"syntax BExp ::=")==0) || (strcmp(x,"syntax Block ::=")==0) || (strcmp(x,"syntax Stmt ::=")==0)){
    scrie_buffer("\\newline\n");
    if(strcmp(x,"syntax AExp ::=")==0)
	scrie_comentariuExp();
    if(strcmp(x,"syntax Block ::=")==0)
	scrie_comentariuBlock();
    scrie_buffer_char_ns(x);
    scrie_buffer(" ");}
 else { 
 scrie_buffer("\\newline\n\\newline\n\\newline\n");
    scrie_buffer_char_ns(x);
    scrie_buffer(" ");}
}

void printcuvinte(char x[])
{
    scrie_buffer_char_ns(x);
}

void printdrept()
{
    scrie_buffer_char_ns("\\hspace{35pt} \\qquad $\\arrowvert$ ");
}

void printsageata()
{
    scrie_buffer_char_ns("\\hspace{35pt} \\qquad $>$ left: \n\n\\hspace{35pt} \\qquad ");
}

void printsageatas()
{
    scrie_buffer_char_ns("\\hspace{35pt} \\qquad $>$ ");
}

void configk()
{
    scrie_buffer_char_ns("\n\\begin{tikzpicture}\\fill[color=SkyBlue] (0,0) rectangle (3,2);\n\\draw[color=SkyBlue] (0,0) rectangle (3,2); \n\\fill[color=SkyBlue] (3,0).. controls (3.25,1).. (3,2) -- (3,0);\n\\fill[color=SkyBlue] (0,0).. controls (-0.25,1).. (0,2) -- (0,0);\n\\fill[color=MidnightBlue] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\draw[color=SkyBlue,line width=1pt] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\node[draw=SkyBlue] at (1.3,0.5) \n{$\\$PGM: Stmt$};\n\\node[draw=MidnightBlue] at (0.8,1.8)\n{\\underline{\\textit{k}}};\n\\end{tikzpicture}");
}

void configenv()
{
    scrie_buffer_char_ns("\n\\begin{tikzpicture}\\fill[color=CarnationPink] (0,0) rectangle (3,2);\n\\draw[color=CarnationPink] (0,0) rectangle (3,2); \n\\fill[color=CarnationPink] (3,0).. controls (3.25,1).. (3,2) -- (3,0);\n\\fill[color=CarnationPink] (0,0).. controls (-0.25,1).. (0,2) -- (0,0);\n\\fill[color=Sepia] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\draw[color=CarnationPink,line width=1pt] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\node[draw=CarnationPink] at (1.3,0.5) \n{$.Map$};\n\\node[draw=Sepia] at (0.8,1.8)\n{\\underline{\\textit{env}}};\n\\end{tikzpicture}");
}

void configstore()
{
    scrie_buffer_char_ns("\n\\begin{tikzpicture}\\fill[color=CornflowerBlue] (0,0) rectangle (3,2);\n\\draw[color=CornflowerBlue] (0,0) rectangle (3,2); \n\\fill[color=CornflowerBlue] (3,0).. controls (3.25,1).. (3,2) -- (3,0);\n\\fill[color=CornflowerBlue] (0,0).. controls (-0.25,1).. (0,2) -- (0,0);\n\\fill[color=NavyBlue] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\draw[color=CornflowerBlue,line width=1pt] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\node[draw=CornflowerBlue] at (1.3,0.5) \n{$.Map$};\n\\node[draw=NavyBlue] at (0.8,1.8)\n{\\underline{\\textit{store}}};\n\\end{tikzpicture}");
}

void configstack()
{
    scrie_buffer_char_ns("\n\\begin{tikzpicture}\\fill[color=YellowGreen] (0,0) rectangle (3,2);\n\\draw[color=YellowGreen] (0,0) rectangle (3,2); \n\\fill[color=YellowGreen] (3,0).. controls (3.25,1).. (3,2) -- (3,0);\n\\fill[color=YellowGreen] (0,0).. controls (-0.25,1).. (0,2) -- (0,0);\n\\fill[color=ForestGreen] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\draw[color=YellowGreen,line width=1pt] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\node[draw=YellowGreen] at (1.3,0.5) \n{$.List$};\n\\node[draw=ForestGreen] at (0.8,1.8)\n{\\underline{\\textit{stack}}};\n\\end{tikzpicture}");
}

void configin()
{
    scrie_buffer_char_ns("\n\\begin{tikzpicture}\\fill[color=Aquamarine] (0,0) rectangle (3,2);\n\\draw[color=Aquamarine] (0,0) rectangle (3,2); \n\\fill[color=Aquamarine] (3,0).. controls (3.25,1).. (3,2) -- (3,0);\n\\fill[color=Aquamarine] (0,0).. controls (-0.25,1).. (0,2) -- (0,0);\n\\fill[color=RoyalBlue] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\draw[color=Aquamarine,line width=1pt] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\node[draw=Aquamarine] at (1.3,0.5) \n{$.List$};\n\\node[draw=Aquamarine] at (1.5,1.6)\n{\\underline{\\textit{in stream=\"stdin\"}}};\n\\end{tikzpicture}");
}

void configout()
{
    scrie_buffer_char_ns("\n\\begin{tikzpicture}\\fill[color=Apricot] (0,0) rectangle (3,2);\n\\draw[color=Apricot] (0,0) rectangle (3,2); \n\\fill[color=Apricot] (3,0).. controls (3.25,1).. (3,2) -- (3,0);\n\\fill[color=Apricot] (0,0).. controls (-0.25,1).. (0,2) -- (0,0);\n\\fill[color=Salmon] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\draw[color=Apricot,line width=1pt] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\node[draw=Salmon] at (1.3,0.5) \n{$.List$};\n\\node[draw=Apricot] at (1.5,1.6)\n{\\underline{\\textit{\\small out stream=\"stdout\"}}};\n\\end{tikzpicture}");
}

void verrifica_cuvant(char x[])
{
    if(strcmp(x,"if")==0)
	scrie_buffer("IF");
    if(strcmp(x,"while")==0)
	scrie_buffer("WHILE");
    if(strcmp(x,"else")==0)
	scrie_buffer("else");
    scrie_buffer(" ");
}
