%{
#include <stdio.h>
#include "fcn.h"
int err=0;
FILE *g ;
extern FILE* yyin;
extern FILE* yyout;
extern char* yytext;
extern int yylineno;
int yylex();
int yyerror();
%}
%start PGM
%union {char *coment;char *nume;}
%type<nume> incep_sintaxa nume_sintaxe cuvinte continutsintaxe cuvintee ghili paranteze1 inm
atribut imp plus minus smir and Sma Soe paranteze31 paranteze32 altcon simb numeSemantica incep_semantica import k env store stack instream outstream var
%type<coment> comentariu 
%token comentariu incep_sintaxa sfarsit_sintaxa nume_sintaxe cuvinte drept ghili paranteze1 sageata inm atribut imp plus minus smir and Sma Soe paranteze31 paranteze32 simb special incep_semantica import k configur env store stack instream outstream var rule tip_i tip_st tip_bl mme mMe pInt sp mmeInt ttrue ffalse tip_B simpleR incepK sfarsitK incepEnv sfarsitEnv incepSto sfarsitSto ghmi drp incepSta sfarsitSta 

%%
PGM : numeSintaxa sintaxe sfarsit_sintaxa numeSemantica continutSemantica sfarsitSemantica {if(err==0){fprintf(g,buffer);;printf("Programul a reusit . . . NOOTHINX >.<\n");}else printf("\nlimbaj cu %d erori",err);} ;

numeSintaxa : incep_sintaxa {if(err==0){scrie_comentariusintaxa();printcomentariu($1);}};

sintaxe : sintaxe numesintaxe continutsintaxe | ;

numesintaxe : nume_sintaxe  {if(err==0){printsintaxe($1);}} ;

continutsintaxe : cuvintee commm | cuvintee commm altcon | altcon;

cuvintee : cuvinte {if(err==0){scrie_buffer(" ");printcuvinte($1);scrie_buffer(" ");}};

altcon : simbol cuvintee comm {if(err==0){scrie_buffer("\n");}}
       | altcon simbol cuvintee comm {if(err==0){scrie_buffer("\n");}} 
       | altcon simbol comm {scrie_buffer("\n");}
       | altcon cuvintee comm {scrie_buffer("\n");}
       | simbol comm {scrie_buffer("");};

simbol : drept {if(err==0){scrie_buffer("\n \n");printdrept();}}
  	| ghili {if(err==0){printcuvinte($1);}}
	| paranteze1 {if(err==0){printcuvinte($1);}} 
	| paranteze31 {if(err==0){printcuvinte(" \"\\{\" ");}} 
	| paranteze32 {if(err==0){printcuvinte(" \"\\}\" ");}} 
	| sageata {if(err==0){scrie_buffer("\n");printsageata();}}
	| special {if(err==0){scrie_buffer("\n");printsageatas();}}
	| inm {if(err==0){scrie_buffer($1);}}
	| atribut {if(err==0){printcuvinte($1);}}
	| imp {if(err==0){scrie_buffer($1);}}
	| plus {if(err==0){scrie_buffer($1);}}
	| minus {if(err==0){scrie_buffer($1);}}
	| smir {if(err==0){scrie_buffer($1);}}
	| and {if(err==0){scrie_buffer(" \"\\&\\&\" ");}}
	| Soe {if(err==0){scrie_buffer(" \"$<=$\" ");}}
	| Sma {if(err==0){scrie_buffer(" \"$<$\" ");}}
	| simb {if(err==0){scrie_buffer($1);}};

numeSemantica : incep_semantica {if(err==0){scrie_comentariusemantica();scrie_buffer("\\newline \n \\newline \n");printcomentariu($1);}};

continutSemantica : imports sintaxe configuration sintaxe inceprules rules;

imports : import {if(err==0){printcomentariu($1);}};

configuration : config kk eenv sstore sstack iinstream ooutstream {if(err==0)scrie_buffer("\\newline\\newline\\newline");};

config : configur {if(err==0){scrie_comentariuConfig();scrie_buffer("\\newline\\newline\n\\textit{CONFIGURATION: }");}};

kk : k {if(err==0){configk();}} | ;

eenv : env {if(err==0){configenv();}} | ;

sstore : store {if(err==0){configstore();}} | ;

sstack : stack {if(err==0){configstack();}} | ;

iinstream : instream {if(err==0){configin();}} | ;

ooutstream : outstream {if(err==0){configout();}} | ;

inceprules : simpleR {if(err==0)scrie_comentariuSimpleR();};

rules : rules sintaxe simpleRules | rules sintaxe complexRules | ;

simpleRules : rulee elemente{if(err==0)scrie_buffer("}}");} ;

rulee : rule {if(err==0)scrie_buffer("\n\\noindent\\fcolorbox{Black}{White}{\\parbox{3in}{RULE \\newline ");};

elemente : elemente rezult | 
	   elemente variabila |
	   elemente type | 
           elemente ssimbol | 
	   elemente cuvinte {if(err==0)verrifica_cuvant($2);}| ;

ssimbol : mme {if(err==0)scrie_buffer("$<=$ ");} 
	| '{' {if(err==0)scrie_buffer("$\\{$ ");} 
	| '}' {if(err==0)scrie_buffer("$\\}$ ");} 
	| mmeInt {if(err==0)scrie_buffer("$<=int$ ");} 
	| pInt {if(err==0)scrie_buffer("$+int$ ");}  
	| sp {if(err==0)scrie_buffer("$\\sim>$ ");} 
	| '.' {if(err==0)scrie_buffer("$.$ ");} 
	| mMe {if(err==0)scrie_buffer("$=>$ ");} 
	| '+' {if(err==0)scrie_buffer("$+$ ");}  ;

rezult : ttrue {if(err==0)scrie_buffer("true ");} 
	| ffalse {if(err==0)scrie_buffer("false ");} ;

variabila : var {if(err==0)scrie_buffer($1);scrie_buffer(" ");} ;

type : tip_i {if(err==0)scrie_buffer("$int$ ");} 
	| tip_st {if(err==0)scrie_buffer("$stmt$ ");}  
	| tip_bl {if(err==0)scrie_buffer("$block$ ");}  
	| tip_B {if(err==0)scrie_buffer("$BExp$ ");} ;

complexRules : ruleee pack ;

ruleee : rule {if(err==0)scrie_buffer("\n\\newline\\newline\\newline\n\\noindent\\fcolorbox{Black}{White}{\\parbox{2in}{RULE ");};

pack : First Second Third {if(err==0)scrie_buffer("}\n}\\newline");}
	| First Second Fourth {if(err==0)scrie_buffer("}\n}\\newline");};

First : IncepK elemente2 SfarsitK ;

IncepK : incepK {if(err==0)scrie_buffer("\n\\newline\\newline\\newline\n\\begin{tikzpicture}\n\\fill[color=SkyBlue] (0,0) rectangle (3,2);\n\\draw[color=SkyBlue] (0,0) rectangle (3,2); \n\\fill[color=SkyBlue] (3,0) -- (3.2,0.2) -- (3,0.4) -- (3.2,0.6) -- (3,0.8) -- (3.2,1) -- (3,1.2) -- (3.2,1.4)--(3,1.6)--(3.2,1.8)--(3,2)--(3,0);\n\\fill[color=SkyBlue] (0,0).. controls (-0.25,1).. (0,2) -- (0,0);\n\\fill[color=MidnightBlue] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\draw[color=SkyBlue,line width=1pt] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\node[draw=MidnightBlue] at (0.8,1.8){\\underline{\\textit{k}}};\n\\node[draw=SkyBlue] at (1.5,1) {\\ssmall ");}

SfarsitK : sfarsitK {if(err==0)scrie_buffer("};\n\\end{tikzpicture}");};

Second : IncepEnv elemente2 SfarsitEnv ;

IncepEnv : incepEnv {if(err==0)scrie_buffer("\n\\newline\\newline\n\\begin{tikzpicture}\n\\fill[color=CarnationPink] (0,0) rectangle (3,2);\n\\draw[color=CarnationPink] (0,0) rectangle (3,2); \n\\fill[color=CarnationPink] (3,0) -- (3.2,0.2) -- (3,0.4) -- (3.2,0.6) -- (3,0.8) -- (3.2,1) -- (3,1.2) -- (3.2,1.4)--(3,1.6)--(3.2,1.8)--(3,2)--(3,0);\n\\fill[color=CarnationPink] (0,0) -- (-0.2,0.2) -- (0,0.4) -- (-0.2,0.6) -- (0,0.8) -- (-0.2,1) -- (0,1.2) -- (-0.2,1.4)--(0,1.6)--(-0.2,1.8)--(0,2)--(0,0);\n\\fill[color=Sepia] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\draw[color=CarnationPink,line width=1pt] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\node[draw=Sepia] at (0.8,1.8){\\underline{\\textit{env}}};\n\\node[draw=CarnationPink] at (1.5,1) {\\ssmall ");}

SfarsitEnv : sfarsitEnv {if(err==0)scrie_buffer("};\n\\end{tikzpicture}");};

Third : IncepSto elemente2 SfarsitSto ;

IncepSto : incepSto {if(err==0)scrie_buffer("\n\\newline\\newline\n\\begin{tikzpicture}\n\\fill[color=CornflowerBlue] (0,0) rectangle (3,2);\n\\draw[color=CornflowerBlue] (0,0) rectangle (3,2); \n\\fill[color=CornflowerBlue] (3,0).. controls (3.25,1).. (3,2) -- (3,0);\n\\fill[color=CornflowerBlue] (0,0).. controls (-0.25,1).. (0,2) -- (0,0);\n\\fill[color=NavyBLue] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\draw[color=CornflowerBlue,line width=1pt] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\node[draw=NavyBLue] at (0.8,1.8){\\underline{\\textit{store}}};\n\\node[draw=CornflowerBlue] at (1.5,1) {\\ssmall ");}

SfarsitSto : sfarsitSto {if(err==0)scrie_buffer("};\n\\end{tikzpicture}");};

Fourth : IncepSta elemente2 SfarsitSta;

IncepSta : incepSta {if(err==0)scrie_buffer("\n\\newline\\newline\n\\begin{tikzpicture}\n\\fill[color=YellowGreen] (0,0) rectangle (3,2);\n\\draw[color=YellowGreen] (0,0) rectangle (3,2); \n\\fill[color=YellowGreen] (3,0) -- (3.2,0.2) -- (3,0.4) -- (3.2,0.6) -- (3,0.8) -- (3.2,1) -- (3,1.2) -- (3.2,1.4)--(3,1.6)--(3.2,1.8)--(3,2)--(3,0);\n\\fill[color=YellowGreen] (0,0) -- (-0.2,0.2) -- (0,0.4) -- (-0.2,0.6) -- (0,0.8) -- (-0.2,1) -- (0,1.2) -- (-0.2,1.4)--(0,1.6)--(-0.2,1.8)--(0,2)--(0,0);\n\\fill[color=ForestGreen] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\draw[color=YellowGreen,line width=1pt] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\node[draw=ForestGreen] at (0.8,1.8){\\underline{\\textit{stack}}};\n\\node[draw=YellowGreen] at (1.5,1) {\\ssmall ");}

SfarsitSta : sfarsitSta {if(err==0)scrie_buffer("};\n\\end{tikzpicture}");};

elemente2 : elemente2 ssimbol2 |
	    elemente2 cuvinte {if(err==0)scrie_buffer($2);}| ;

ssimbol2 : ':' {if(err==0)scrie_buffer("$:$ ");}
	 | ';' {if(err==0)scrie_buffer("$;$ ");}
	 | '.' {if(err==0)scrie_buffer("$.$ ");}
	 | '(' {if(err==0)scrie_buffer("$($ ");}  
	 | ')' {if(err==0)scrie_buffer("$)$ ");}
	 | '=' {if(err==0)scrie_buffer("$=$ ");}
         | mMe {if(err==0)scrie_buffer("$=>$ ");} 
	 | '{' {if(err==0)scrie_buffer("$\\{$ ");} 
	 | '}' {if(err==0)scrie_buffer("$\\}$ ");} 
	 | sp {if(err==0)scrie_buffer("$\\sim>$ ");}  
	 | '+' {if(err==0)scrie_buffer("$+$ ");} 
	 | pInt {if(err==0)scrie_buffer("$+int$ ");}  
	 | '[' {if(err==0)scrie_buffer("$[$ ");}  
	 | ']' {if(err==0)scrie_buffer("$]$ ");} 
	 | '<' {if(err==0)scrie_buffer("$<$ ");}  
	 | '>' {if(err==0)scrie_buffer("$>$ ");}
	 | '!' {if(err==0)scrie_buffer("! ");} 
	 | '-' {if(err==0)scrie_buffer("- ");} 
	 | tip_i {if(err==0)scrie_buffer("$:Int$ ");} 
	 | tip_st {if(err==0)scrie_buffer("$:Stmt$ ");}  
	 | tip_bl {if(err==0)scrie_buffer("$:Block$ ");}  
	 | tip_B {if(err==0)scrie_buffer("$:BExp$ ");} 
	 | ghmi {if(err==0)scrie_buffer("\"");} 
	 | drp {if(err==0)scrie_buffer("$|->$");} 
	 | '0' {if(err==0)scrie_buffer("0");}
	 | '1' {if(err==0)scrie_buffer("1");}
	 | '_' {if(err==0)scrie_buffer("\\_");}	;

sfarsitSemantica : sfarsit_sintaxa {if(err==0)scrie_comentariuClo();}

comm : comm comentariu {if(err==0){scrie_buffer(" ( ");printcuvinte($2);scrie_buffer(" ) \n");}} | ;

commm : commm comentariu {if(err==0){scrie_buffer(" ( ");printcuvinte($2);scrie_buffer(" ) \n\n");}} | ;

%%

int yyerror(char * s){
err++;
printf("\n!!! eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){

yyin=fopen(argv[1],"r");

if(!(g = fopen("finish.tex","w")))
    fprintf(stderr,"eroare creare fisier!");

fprintf(g,"\\documentclass{article}\n\\usepackage[dvipsnames]{xcolor}\n\\usepackage{calc}\n\\usepackage{fancybox}\n");
fprintf(g,"\\usepackage{tikz}\n\\usepackage{mathptmx}\n\\usepackage[11pt]{moresize}\n\\usetikzlibrary{positioning}\n\\usetikzlibrary{shapes,snakes}\n\\usepackage{amsmath,amssymb}\n");
fprintf(g,"\\begin{document}\n\\title{Project K Tools}\n\\maketitle\n\\author{\\textit{S\\^{a}rbu Iulia Iustina, grupa B1}}\n\\newline\n");

yyparse(); 

fprintf(g,"\n");
fprintf(g,"\\end{document}\n"); 
} 
