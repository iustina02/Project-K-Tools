%{
#include <stdio.h>
#include "y.tab.h"
#include<string.h>
%}
%START com  comm

%%

"//" {BEGIN com;}
<com>\n {BEGIN 0;}
<com>.* {yylval.coment=strdup(yytext);return comentariu;}

"//@" {BEGIN comm;}
<comm>\n {BEGIN 0;}
<comm>.* ;

"module "[A-Z][A-Z]*[0-9]*[A-Z]*[0-9]*"-SYNTAX" {yylval.nume=strdup(yytext);return incep_sintaxa;}
"syntax "[a-zA-Z][a-zA-Z]*[ ]*"::="  {yylval.nume=strdup(yytext);return nume_sintaxe;}
"endmodule" {yylval.nume=strdup(yytext);return sfarsit_sintaxa;}
"|" {return drept;}
\"[a-zA-Z][a-zA-Z]*\"|"\""("+")*"\""|"\""("-")*"\"" {yylval.nume=strdup(yytext);return ghili;}
"\"(\"".*"\")\"" {yylval.nume=strdup(yytext);return paranteze1;}
"\"{\"" {yylval.nume=strdup(yytext);return paranteze31;}
"\"}\"" {yylval.nume=strdup(yytext);return paranteze32;}
">"[ ]*"left:" {return sageata;}
">"[ ]* {return special;}
"\"*\"" {yylval.nume=strdup(yytext);return inm;} 
"\"\/\"" {yylval.nume=strdup(yytext);return imp;} 
"\"+\"" {yylval.nume=strdup(yytext);return plus;} 
"\"-\"" {yylval.nume=strdup(yytext);return minus;}
"\"!\"" {yylval.nume=strdup(yytext);return smir;} 
"\"&&\"" {yylval.nume=strdup(yytext);return and;} 
"\"<=\"" {yylval.nume=strdup(yytext);return Soe;} 
"\"<\"" {yylval.nume=strdup(yytext);return Sma;}
\";\"|\"=\"  {yylval.nume=strdup(yytext);return simb;}
"["[a-zA-Z][a-zA-Z]*("(")*[0-9]*(")")*[ ]*("-")*(",")*[ ]*[a-zA-Z]*"]" {yylval.nume=strdup(yytext);return atribut;}
"module "[A-Z][A-Z]*[0-9]*[A-Z]*[0-9]* {yylval.nume=strdup(yytext);return incep_semantica;}
"imports "[A-Z][A-Z]*[0-9]*[A-Z]*[0-9]*"-SYNTAX" {yylval.nume=strdup(yytext);return import;}
"<k>"[ ]*"$"[A-Z][A-Z]*":"[ ]*[a-zA-Z][a-zA-Z]*[ ]*"</k>" {yylval.nume=strdup(yytext);return k;}
"<env>"[ ]*"."[a-zA-Z][a-zA-Z]*[ ]*"</env>" {yylval.nume=strdup(yytext);return env;}
"<store>"[ ]*"."[a-zA-Z][a-zA-Z]*[ ]*"</store>" {yylval.nume=strdup(yytext);return store;}
"<stack>"[ ]*"."[a-zA-Z][a-zA-Z]*[ ]*"</stack>" {yylval.nume=strdup(yytext);return stack;}
"<in stream=\"stdin\">"[ ]*"."[a-zA-Z][a-zA-Z]*[ ]*"</in>" {yylval.nume=strdup(yytext);return instream;}
"<out stream=\"stdout\">"[ ]*"."[a-zA-Z][a-zA-Z]*[ ]*"</out>" {yylval.nume=strdup(yytext);return outstream;}
"configuration" {return configur;}
"rule" {return rule;}
":Int" {return tip_i;}
":Stmt" {return tip_st;}
":Block" {return tip_bl;}
":BExp" {return tip_B;}
"<=" {return mme;}
"=>" {return mMe;}
"+Int" {return pInt;}
"<=Int" {return mmeInt;}
"~>" {return sp;}
"true" {return ttrue;}
"false" {return ffalse;}
"/*@simplerules*/" {return simpleR;}
"<k>" {return incepK;}
"</k>" {return sfarsitK;}
"<env>" {return incepEnv;}
"</env>" {return sfarsitEnv;}
"<store>" {return incepSto;}
"</store>" {return sfarsitSto;}
"<stack>" {return incepSta;}
"</stack>" {return sfarsitSta;}

"'" {return ghmi;}
\|\-\> {return drp;}
[a-zA-Z][a-zA-Z]* {yylval.nume=strdup(yytext);return cuvinte;}
[a-zA-Z][a-zA-Z]*[0-9]*|[a-zA-Z] {yylval.nume=strdup(yytext);return var;}
[ \t] ;
\n {}
. {return yytext[0];}


%%
