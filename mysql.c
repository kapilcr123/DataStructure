#include<stdio.h>
#include<conio.h>
#include<mysql.h>

int main(){
printf("Hello %s",mysql_get_client_info());
return 0;
}
