#include <stdio.h>
#include <string.h>
typedef struct {
	char loginname[64];
	char password[64];
} account ;

typedef struct {
	char stdID[20];
	char nameSurname[25];
	account stdACC;
} hoststd;

int main(){
	hoststd cs[5] = {
		{"66-040626-0000-9","MR.A",{"user1", "passwd1"}},
		{"66-040626-0000-1","MR.R",{"user2", "passwd2"}},
		{"66-040626-0000-2","MR.T",{"user3", "passwd3"}},
		{"66-040626-0000-3","MR.D",{"user4", "passwd4"}},
		{"66-040626-0000-4","MR.Y",{"user5", "passwd5"}}
	};
	char inputusername[64];
	char inputpassword[64];
	int found = 0;
	scanf("%s",inputusername);
	scanf("%s",inputpassword);
	for(int i = 0; i<5 ; i++){
		if(strcmp(inputusername,cs[i].stdACC.loginname) == 0 && strcmp(inputpassword,cs[i].stdACC.password) == 0){
			found = 1;
			break;
		}
	}	
	if(found){
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
		
	return 0;
}
