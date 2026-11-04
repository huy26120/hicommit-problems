#include <stdio.h>

int main(){
float dtb,drl;

int hocluc, hanhkiem;
scanf("%f",&dtb);
scanf("%f",&drl);
  if(dtb >= 9.0) hocluc = 1;
else if (8.0 >= dtb < 9.0) hocluc = 2;
else if (7.0 >= dtb < 8.0) hocluc = 3;
else if (dtb < 7.0) hocluc = 4;
  
  if (drl >= 90) hanhkiem = 1;
else if (drl >= 80 && drl < 90) hanhkiem = 2;
else if (drl >= 70 && drl <80) hanhkiem = 3;
else if(drl < 70) hanhkiem = 4;
  
  if(hocluc == 1 && hanhkiem == 1){
    printf("HOC_BONG_XUAT_SAC");
}
else if(hocluc == 2 && hanhkiem == 2){
    printf("HOC_BONG_GIOI");
}else if(hocluc == 3 && hanhkiem == 3)
    printf("HOC_BONG_KHA");
   if(hocluc == 4 && hanhkiem == 4){
    printf("KHONG_DAT");
}
 return 0;
}

  

