#include <stdio.h>

int main(){
float dtb;
floar drl;
int hoc luc, hanh kiem;
scanf("%f",&dtb);
scanf("%f",&drl);
  if(dtb >= 9.0) hoc luc = 1;
else if (8.0 >= dtb < 9.0) hoc luc = 2;
else if (7.0 >= dtb < 8.0) hoc luc = 3;
else if (dtb < 7.0) hoc luc 4.;
  
  if (drl >= 90) hanh kiem = 1;
else if (drl >= 80 && drl < 90) hanh kiem  2;
else if (drl >= 70 && dtl <80) hanh kiem = 3;
else if(drl < 70) hanh kiem = 4.;
    }
  if(hoc luc == 1 && hanh kiem == 1){
    printf("HOC_BONG_XUAT_SAC");
}
else if(hoc luc == 2 && hanh kiem == 2){
    printf("HOC_BONG_GIOI");
}else if(hoc luc == 3 && hanh kiem == 3)
    printf("HOC_BONG_KHA");
   if(hoc luc == 4 && hanh kiem == 4){
    printf("KHONG_DAT");
}
 return 0;
}

  

