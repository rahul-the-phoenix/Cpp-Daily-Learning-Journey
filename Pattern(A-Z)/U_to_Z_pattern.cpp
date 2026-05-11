

//==========================VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV===============================
for(int i=1;i<=n/2+1;i++){
    for( int j=1;j<=n;j++){
        if(j==i || j== n-i+1) cout <<"*"; else cout << " ";
    }
    cout << endl;
}

