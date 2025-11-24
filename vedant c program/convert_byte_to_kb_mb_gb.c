# include <stdio.h>
int main(){
    float bytes,kilobytes,megabytes,gigabytes;
    printf("enter size in bytes to convert into kilograms,megabytes and gigabytes\n");
    scanf("%f",&bytes);
    if( bytes >= 0){
        kilobytes = bytes/1024;
        megabytes = kilobytes/1024;
        gigabytes = megabytes/1024;
        printf("convertion of %f bytes into kilobytes is %f\n", bytes, kilobytes);
        printf("convertion of %f bytes into megabytes is %f\n", bytes, megabytes);
        printf("convertion of %f bytes into gigabytes is %f\n", bytes, gigabytes);
    }
    else {
        printf("please enter a number greater than or equal to 0\n");
    }
    return 0;
}