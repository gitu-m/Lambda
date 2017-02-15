#include <stdio.h>

int main(){
	int n,k;

	scanf("%d %d", &n, &k);

	int i;

	int counter=0;

	if (n<k) printf("%d\n", -1);

	else {
		for(i=1; i<=((n/2)) ; i++){

			if(n%i==0) counter++;

			if(counter==k) break;
		}

		if (counter==(k-1)) printf("%d\n", n);
		else if (counter!=k) printf("%d\n", -1);

		else printf("%d\n", i);

	}
	return 0;
}