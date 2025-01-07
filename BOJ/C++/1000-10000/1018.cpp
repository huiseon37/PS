#include <iostream>
#include <string>

using namespace std;
//ºñ±³¿ë 
string white[8] = {"WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW"};
string black[8] = {"BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB"};

string chess[51];
 
int main() {
	
	int n, m;
	
	cin >> n >> m;
	
	for(int i=0;i<n;i++){
		cin>>chess[i];
	}
	
	int a=0,b=0;
	int cntw=0,cntb=0, min=1000000;
	
	for(int k=0;k<(m-7)*(n-7);k++){
		for(int i=0;i<=7;i++){
			for(int j=0;j<=7;j++){
				if(chess[i+a][j+b] != white[i][j]){
					cntw++;
				}
				if(chess[i+a][j+b] != black[i][j]){
					cntb++;
				}
			}
		}
		
		if(cntw<cntb){
			if(cntw<min){
				min = cntw;
			}
		}
		else{
			if(cntb<min){
				min = cntb;
			}
		}
		
		if(b >= m-8){
			a++;
			b=0;
		}
		else{
			b++;
		}
		cntw=0;
		cntb=0;		
	}
	
	cout<<min<<endl;
	
	return 0;
}
