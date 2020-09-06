#include <stdio.h>
#include <string.h>

char *invert_strncpy(char string[100], int ini);
int convert_conceptToNote(char char_note);
void set_credits();
void process_string();
void set_name();

typedef struct {
    char *name;
    int test1;
    int test2;
    int media;
    int credit;
} discipline;

discipline logic_mat, software_eng, computing_teory, database, software_arq;

void main(void){

    char input[100];
    set_name();
    set_credits();
    scanf("%[^\n]s", input);
    //setbuf(stdin, NULL);
        process_string(input);
        scanf("%[^\n]s", input);
        process_string(input);

    printf("%s media %d \n%s media %d \n%s media %d \n%s media %d \n%s media %d \n",
    logic_mat.name, logic_mat.media,
    software_eng.name, software_eng.media,
    computing_teory.name, computing_teory.media,
    database.name, database.media,
    software_arq.name, software_arq.media);
    //Existem erros de execução nesse código.
}

void set_name(){
    logic_mat.name = "Logica Matematica";
    software_eng.name = "Engenharia de Software";
    computing_teory.name = "Teoria da Computacao";
    database.name = "Banco de Dados";
    software_arq.name = "Arquitetura de Software";
}

void set_credits(){
    logic_mat.credit = 4;
    software_eng.credit = 6;
    computing_teory.credit = 3;
    database.credit = 6;
    software_arq.credit = 4;
}

void process_string(char string[100]){
    if((strstr(string,logic_mat.name)-string)  == 0){
        strcpy(string, invert_strncpy(string, strlen(logic_mat.name)+1));
        printf("%s\n%c\n", string, string[strlen(string)-1]);
        if((strstr(string, "media")-string) == 0){
            logic_mat.media = convert_conceptToNote(string[strlen(string)-1]);
        }
        else if((strstr(string, "prova1")-string) == 0){
            logic_mat.test1 = convert_conceptToNote(string[strlen(string)-1]);
            printf("%d\n",  logic_mat.test1);

        }
        else if((strstr(string, "prova2")-string) == 0){
            logic_mat.test2 = convert_conceptToNote(string[strlen(string)-1]);
            printf("%d\n",  logic_mat.test2);
            logic_mat.media = (logic_mat.test1+logic_mat.test2)/2;
            printf("%d\n",  logic_mat.media);
        }
    }

    if((strstr(string,software_eng.name)-string) == 0){
        if((strstr(string,software_eng.name)-string)  == 0){
        if((strstr(string, "media")-string) == 0){
            software_eng.media = convert_conceptToNote(string[strlen(string)-1]);

        }
        else if((strstr(string, "prova1")-string) == 0){
            software_eng.test1 = convert_conceptToNote(string[strlen(string)-1]);

        }
        else if((strstr(string, "prova2")-string) == 0){
            software_eng.test2 = convert_conceptToNote(string[strlen(string)-1]);
            software_eng.media = (software_eng.test1+software_eng.test2)/2;
        }
    }
    }

    if((strstr(string,software_arq.name)-string) == 0){
        if((strstr(string,software_arq.name)-string)  == 0){
        if((strstr(string, "media")-string) == 0){
            software_arq.media = convert_conceptToNote(string[strlen(string)-1]);

        }
        else if((strstr(string, "prova1")-string) == 0){
            software_arq.test1 = convert_conceptToNote(string[strlen(string)-1]);

        }
        else if((strstr(string, "prova2")-string) == 0){
            software_arq.test2 = convert_conceptToNote(string[strlen(string)-1]);
            software_arq.media = (software_arq.test1+software_arq.test2)/2;
        }
    }
    }

    if((strstr(string,computing_teory.name)-string) == 0){
        if((strstr(string,computing_teory.name)-string)  == 0){
        if((strstr(string, "media")-string) == 0){
            computing_teory.media = convert_conceptToNote(string[strlen(string)-1]);

        }
        else if((strstr(string, "prova1")-string) == 0){
            computing_teory.test1 = convert_conceptToNote(string[strlen(string)-1]);

        }
        else if((strstr(string, "prova2")-string) == 0){
            computing_teory.test2 = convert_conceptToNote(string[strlen(string)-1]);
            computing_teory.media = (computing_teory.test1+computing_teory.test2)/2;
        }
    }
    }

    if((strstr(string,database.name)-string) == 0){
        if((strstr(string,database.name)-string) == 0){
        if((strstr(string,database.name)-string)  == 0){
        if((strstr(string, "media")-string) == 0){
            database.media = convert_conceptToNote(string[strlen(string)-1]);

        }
        else if((strstr(string, "prova1")-string) == 0){
            database.test1 = convert_conceptToNote(string[strlen(string)-1]);

        }
        else if((strstr(string, "prova2")-string) == 0){
            database.test2 = convert_conceptToNote(string[strlen(string)-1]);
            database.media = (database.test1+database.test2)/2;
        }
    }
    }
}
}

int convert_conceptToNote(char char_note){

    switch(char_note){
        case 'A':
            return 9;
        break;
        case 'B':
            return 7;
        break;
        case 'C':
            return 5;
        break;
        case 'D':
            return 3;
        break;
        case 'F':
            return 0;
        break;
        default:
            return -1;
        break;
    }
    }

char *invert_strncpy(char string[100], int ini){
    char string_return[100], *dest;
    for(int count=0; ini<=strlen(string)-1; count++)
    {
        string_return[count] = string[ini];
        ini++;
    }
    dest = string_return;
    printf("a seguir, saidar de invert_strncpy \ndest: %s\nreturn: %s\n", dest, string_return);
    return dest;
 }

