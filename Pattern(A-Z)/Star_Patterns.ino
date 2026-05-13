//========================NO 1===========================
// 11111
// 12221
// 12321
// 12221
// 11111

for(int r=1;r<=n;r++){
        int i = r<=n/2+1 ? r : n-r+1;

        for(int j=1;j<=i;j++) cout<<j;
        for(int j=1;j<=n-2*i;j++) cout<<i;
        for(int j=i;j>=1;j--) if(j!=n/2+1) cout<<j;

        cout<<"\n";
    }
