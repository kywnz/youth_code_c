#include <bits/stdc++.h>
int main(){
	int sum;
	int m=1,d=1;
	cin>>sum;
	for (;m<=12;m++){
		if(m==2){
			d=1;sum+=1;
			for(;d<=28;d++){
				if (sum == (int)( 30.42 * (m - 1)) + d){
					cout<<d<<" "<<m;
					break;
				}
			}
		}
		if(m==3 || m==5 || m==7 || m==8){
			d=1;sum-=1;
			for(;d<=31;d++){
				if(sum == (int)( 30.42 * (m - 1)) + d){
					cout<<d<<" "<<m;
					break;
				}
			}
		}
		if(m==6 || m==4){
			d=1;sum-=1;
			for(;d<=30;d++){
				if(sum == (int)( 30.42 * (m - 1)) + d){
					cout<<d<<" "<<m;
					break;
				}
			}
		}
		if(m==1 || m==10 || m==12){
			d=1;
			for(;d<=31;d++){
				if(sum == (int)( 30.42 * (m - 1)) + d){
					cout<<d<<" "<<m;
					break;
				}
			}
		}
		if(m==9 || m==11){
			d=1;
			for(;d<=30;d++){
				if(sum == (int)( 30.42 * (m - 1)) + d){
					cout<<d<<" "<<m;
					break;
				}
			}
		}
	}
}
/*
int m = 1;
    // Thu?t toán tr? d?n:
    // N?u s? ngày còn l?i (n) l?n hon s? ngày c?a tháng hi?n t?i
    // -> Tr? di s? ngày tháng dó và chuy?n sang tháng ti?p theo.
    while (n > daysInMonth[m]) {
        n -= daysInMonth[m];
        m++;
    }

    // Lúc này n chính là ngày (d), m là tháng
    cout << n << " " << m;

    return 0;
}
*/

