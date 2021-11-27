//completed

1.
	a) int t[2][5] = {1,2,3,4,5,6,7,8,9,10} ;
	b) 2
	c) 5
	d) 10
	e) t[1][0],t[1][1],t[1][2],t[1][3],t[1][4],
	
	f) t[0][2],t[1][2]
	
	g) t[0][1] = 0 ;
	
	
	h) for (int i = 0; i < 2 ; i++) {
		
		for (int j = 0; j < 5 ; j++){
			
			t[i][j] = 0 ;
			
		}
		
	}
	i)  for (int i = 0; i < 2 ; i++) {
		
		for (int j = 0; j < 5 ; j++){
			
			std:: cin >> t[i][j] ;
			
		}
		
	} 
	
	
	j) 	
		int smallest = t[0][0] ;
		
		for (int i =0; i < 2 ; i++) {
		
		for (int j =0; j < 5 ; j++){
			
			if (smallest <= t [i][j]){
				smallest = t [i][j] ;
			}	
		}
		
		} 
		
		std:: cout << smallest ;
		
	k)  
		
		for (int j = 0; j < 5 ; j++){
			
			std:: cout << t[0][j] << endl;
			
		}
			 
	L) std :: cout << t[0][3]+t[1][3] << endl;
	
	
	M)	cout << "              Column 1 " << " Column 2 " << " Column 3 " << " Column 4 "<< " Column 5 " << endl;
		cout << " Row 1  " ;
		for (int a=0; a < 5 ; a++){
			cout << setw (10) << t[a][0]  ;
		}
		cout << endl ;
		
		cout << " Row 2  " ;
		for (int a=0; a < 5 ; a++){
			cout << setw (10) << t[a][1]  ;
		}
		cout << endl ;
	
