//#include <stdio.h>
//#include <cstring>
//
////hold each contact from text file
//struct contact{
//    char fName[16];//we keep it one character more than needed
//    char lName [16];
//    char dob[11];
//};
//
////hold DOB of each contact
//struct date{
//
//    char day[3];//2
//    char month[3];//2
//    char year[5];//4
//
//};
//
//int loadContacts(struct contact *array, struct date *date) ;
//void getInput(char *base, char target[3][16], char delimiter);
//void legalAndYoung(struct date *date, struct contact *Contactarray, int numberOfContacts);
//
//int main() {
//
//    //array(s) that we will load
//    struct date date_token[100];
//    struct date *dates=date_token;
//
//    struct contact contact_info[100];
//    struct contact *contacts=contact_info;
//
//    int numberOfContacts=loadContacts(contacts,dates);
//
//    legalAndYoung(dates,contacts,numberOfContacts);
//}
//
///*
// * This method takes contact names from file and loads an array of type Contacts, splitting information in terms of Fname,Lname and DOB
// * It also loads the DOB array of type date by spliting the DOB in day-month-year
// * The method returns the total number of contacts that are in the text file
// */
//int loadContacts(struct contact *array, struct date *date) {
//
//    //read the contents of the file and load them into an array, the array holds struct person
//
//    FILE *file;
//    file = fopen("/Users/shaila/Desktop/Lion_c++/CAAss2/contacts.txt", "r");// r specifies that we want to read the file
//    char input[43];
//    char tokens[3][16];
//    char dateToken[3][16];
//    int index = 0;
//
//    if (file == 0) {//if file cant open, print error message
//        printf("Cannot open file \n");
//
//    }
//    while (fgets(input, 43, file)) { //get a line up to /n and store into the input array
//        //load array of type Struct
//
//        //break input into separate words, load each word into the struct
//        getInput(input, tokens,' ');
//        strcpy(array[index].fName,tokens[0]);
//        strcpy(array[index].lName, tokens[1]);
//        strcpy(array[index].dob, tokens[2]);
//
//        // we will also load our  Date Array
//        getInput(tokens[2],dateToken,'-');
//        strcpy(date[index].day, dateToken[0]);
//        strcpy(date[index].month, dateToken[1]);
//        strcpy(date[index].year, dateToken[2]);
//        index++;
//
//    }
//    fclose(file);
//
//    return index;//number of total contacts
//}
//
///*
// * This method breaks an input line from the file into 3 different categories based on specified delimiter
// *
// */
//void getInput(char *base, char target[3][16], char delimiter) {
//
//    {
//        //target is an array of 3 words, each word is 15 characters maximum
//        //base is char array which is our contact information string from text file
//        int n=0,i,j=0;
//
//        for(i=0;strlen(base);i++)
//        {
//            if(base[i]!=delimiter && base[i] != '\n'){
//                target[n][j++]=base[i];//in the token array, add the character from input string
//            }
//            else{
//                target[n][j++]='\0';//insert NULL, no character found, first token obtained
//                n++; //move to next token's char array
//                j=0;
//            }
//            if(base[i]=='\n')
//                break;
//        }
//
//    }
//
//}
//
///*
// * This method calculates the age of each contact and prints contacts who are between the age of 18 and 25 (inclusive)
// * in a specific format-  FName initial. Last name, Age
// */
//void legalAndYoung (struct date *date,struct contact *Contactarray,int numberOfContacts){
//
//    int currentYear=2018;
//    int yob=0;
//    int age=0;
//
//    int i;
//    for(i=0; i<numberOfContacts;i++){
//
//        sscanf(date[i].year, "%d", &yob); //get year of contact from date array and store into var YOB
//        age=currentYear-yob; //check the difference
//        if(age>=18 && age<=25){
//            //then print the persons information at this age from the contacts array
//                printf("%c", Contactarray[i].fName[0]);
//                printf("%c",'.');
//                printf("%s", Contactarray[i].lName);
//                printf("%c",',');
//                printf("%d\n",age);
//        }
//
//    }
//
//}