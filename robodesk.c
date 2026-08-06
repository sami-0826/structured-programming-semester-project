#include <stdio.h>
int main(){
    int choice;
    int service_code[3] = {101,102,103};
    char service_name[3] [40] = {"Library Card Status","Lab Access Permission","Medical Booth Token"};
    
    int search_code, found;
    do{
    printf("    RoboDesk's Campus Service Kiosk    \n");
    printf("1. Check Library Card Status\n");
    printf("2. Check Lab Access Permission\n");
    printf("3. Check Medical Booth Token\n");
    printf("4. Search Service by Service Code\n");
    printf("5. Exit\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);

        switch (choice){
        case 1:
        printf("Service Available: Library Card Status\n");
        break;

        case 2:
        printf("Service Available: Lab Access Permission\n");
        break;

        case 3:
        printf("Service Available: Medical Booth Token\n");
        break;

        case 4:
        printf("Enter Service Code: ");
        scanf("%d",&search_code);
        found=0;
        for(int i=0; i<3; i++){
            if(service_code[i]==search_code){printf("Service Found: %s\n",service_name[i]);
            found = 1;
            break;}
        }
        if(found==0){ printf("Service Unavailable\n");}
        break;

        case 5:
        printf("Exiting. Thank You for using RoboDesk\n");
        break;

        default:
        printf("Invalid Choice\n");
    }
    printf("\n");
}
    while (choice != 5);
}