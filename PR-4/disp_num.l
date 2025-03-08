%%
[0-9] { printf("%c\n", yytext[0]); }
.    {}
\n   { return 0; }
%%

int main() {
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
