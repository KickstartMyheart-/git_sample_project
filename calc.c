#include<stdio.h>

int main(void){
  FILE *fp;
  char *fname = "grade.csv";
  char con[5][20];
  int i,j,k;
  int poin[15][5];
  int ave=0;
  double ave2;

  fp=fopen(fname,"r");
  if(fp==NULL) printf("開けないです\n");
  
  for(i=0;i<11;i++){
    for(j=0;j<5;j++){
      if(i==0){
	fscanf(fp,"%s,",con[j]);
      }
      else{
	fscanf(fp,"%d,",&poin[i][j]);
      }
    }
    if(i!=0){
	for(k=0;k<5;k++){
	ave+=poin[i][k];
	}
    }
  }
  printf("合計：%d\n",ave);
  ave2=(double)ave/50;
  printf("平均：%f\n",ave2);

  fclose(fp);

  return 0;
}
