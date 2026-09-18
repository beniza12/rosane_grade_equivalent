#include <stdio.h> 

int main(){
    
    //input : grade
int grade ;

    //process: identify if what's the corresponding letter to a grade
printf("Enter your score : ");
scanf("%d" , &grade);
    //output: corresponding letter
if (grade >= 90){
    printf("A\n");
}
    

else if (grade >= 80){
    printf("B \n");
}
    

else if (grade >= 70){
    printf("C \n");
}

else if ( grade >= 60){
    printf("D \n");
}
    else {
        printf("F\n");
    }

    return 0;
}