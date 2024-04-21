 #include <stdio.h>
int main(){
        //Kamus Lokall
        int s1,s2,s3;
        printf("Masukkan sisi 1: ");
        scanf("%d",&s1);
        printf("Masukkan sisi 2: ");
        scanf("%d",&s2);
        printf("Masukkan sisi 3: ");
        scanf("%d",&s3);
        if(s1<=0 || s2<=0 || s3<=0){
                printf("Terdapat nilai yang bukan sisi segitiga\n");
        }
        else{
                if((s1+s2)>s3 || (s1+s3)>s2 || (s2+s3)>s1){

                }
        }

        return 0;
}
