//========================LLLLLLLLLLLLLLLLLLLLLLL=============================
for( int i=1;i<n ;i++){
    cout << "*";
    cout<<endl;
    }
for(int i=1;i<=n;i++){
    cout<<"* ";
}


//==============================NNNNNNNNNNNNNNNNNNNNNN===========================
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j==1 || j==n || j==i) cout<<"*";
        else cout <<" ";
    }
    cout << endl;
}
