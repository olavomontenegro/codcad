#include <stdio.h>
int main() {
    
    int N,V,i,anterior,j,pontos;
    
    scanf("%d",&N);
    anterior=0;
    j=1;
    for(i=0;i<N;i++){
		scanf("%d",&V);  
		printf("%d\n",V);
		if(i == 0){
			anterior=V;
		}
		else{
			if(V==anterior){
				j++;
			}
			else {
				anterior=V;
				pontos=j;
				j=1;
			}
			if(pontos<j){
				pontos=j;
			}
		}
    }
    printf("%d\n",pontos);
    printf("%d\n",anterior);
    return 0;
}
