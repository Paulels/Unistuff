#include <iostream>


bool descending(int array[],int n){
	int tru=0;
	int i=0;
			for(i=0;i<n-1;i++){
				if(array[i]>array[i+1]){
					tru=tru+1;
				}
}
if(tru==(n-1)){
		return true;
}
else{
return false;
}
	
}

#ifndef WEBSUBMIT
int main(){
	int array[5]={5,4,3,2,1};
std::cout << descending(array,5) << std::endl;

}
#endif //WEBSUBMIT
