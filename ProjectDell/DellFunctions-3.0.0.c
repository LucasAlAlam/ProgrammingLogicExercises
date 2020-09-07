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
    float media;
    int credit;
} discipline;

discipline logic_mat, software_eng, computing_teory, database, software_arq;

void main(void){

    char input[100];
    set_name();
    set_credits();
    scanf("%[^\n]s", input);
    setbuf(stdin, NULL);
    do{
        process_string(input);
        scanf("%[^\n]s", input);
        setbuf(stdin, NULL);
    }while (strcmp(input, "quit") != 0);

    printf("%s media %.2f \n%s media %.2f \n%s media %.2f \n%s media %.2f \n%s media %.2f \n",
    logic_mat.name, logic_mat.media,
    software_eng.name, software_eng.media,
    computing_teory.name, computing_teory.media,
    database.name, database.media,
    software_arq.name, software_arq.media);
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
        if((strstr(string, "media")-string) == 0){
            logic_mat.media = convert_conceptToNote(string[strlen(string)-1]);
        }
        else if((strstr(string, "prova1")-string) == 0){
            logic_mat.test1 = convert_conceptToNote(string[7]);
        }
        else if((strstr(string, "prova2")-string) == 0){
            logic_mat.test2 = convert_conceptToNote(string[7]);
            logic_mat.media = ((float)logic_mat.test1+(float)logic_mat.test2)/2;
        }
}

    if((strstr(string,software_arq.name)-string)  == 0){
        strcpy(string, invert_strncpy(string, strlen(software_arq.name)+1));
        if((strstr(string, "media")-string) == 0){
            software_arq.media = convert_conceptToNote(string[strlen(string)-1]);
        }
        else if((strstr(string, "prova1")-string) == 0){
            software_arq.test1 = convert_conceptToNote(string[7]);
        }
        else if((strstr(string, "prova2")-string) == 0){
            software_arq.test2 = convert_conceptToNote(string[7]);
            software_arq.media = ((float)software_arq.test1+(float)software_arq.test2)/2;
        }
        }

        if((strstr(string,software_eng.name)-string)  == 0){
        strcpy(string, invert_strncpy(string, strlen(software_eng.name)+1));
        if((strstr(string, "media")-string) == 0){
            software_eng.media = convert_conceptToNote(string[strlen(string)-1]);
        }
        else if((strstr(string, "prova1")-string) == 0){
            software_eng.test1 = convert_conceptToNote(string[7]);
        }
        else if((strstr(string, "prova2")-string) == 0){
            software_eng.test2 = convert_conceptToNote(string[7]);
            software_eng.media = ((float)software_eng.test1+(float)software_eng.test2)/2;
        }
}

        if((strstr(string,computing_teory.name)-string)  == 0){
        strcpy(string, invert_strncpy(string, strlen(computing_teory.name)+1));
        if((strstr(string, "media")-string) == 0){
            computing_teory.media = convert_conceptToNote(string[strlen(string)-1]);
        }
        else if((strstr(string, "prova1")-string) == 0){
            computing_teory.test1 = convert_conceptToNote(string[7]);
        }
        else if((strstr(string, "prova2")-string) == 0){
            computing_teory.test2 = convert_conceptToNote(string[7]);
            computing_teory.media = ((float)computing_teory.test1+(float)computing_teory.test2)/2;
        }
}

        if((strstr(string,database.name)-string)  == 0){
        strcpy(string, invert_strncpy(string, strlen(database.name)+1));
        if((strstr(string, "media")-string) == 0){
            database.media = convert_conceptToNote(string[strlen(string)-1]);
        }
        else if((strstr(string, "prova1")-string) == 0){
            database.test1 = convert_conceptToNote(string[7]);
        }
        else if((strstr(string, "prova2")-string) == 0){
            database.test2 = convert_conceptToNote(string[7]);
            database.media = ((float)database.test1+(float)database.test2)/2;
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
    for(int count=0; ini<strlen(string); count++)
    {
        string_return[count] = string[ini];
        ini++;
    }
    dest = string_return;
    return dest;
 }

