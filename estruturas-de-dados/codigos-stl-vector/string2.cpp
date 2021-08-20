#include <iostream>
#include <string>
#include <stdio.h>


using namespace std;
int main()
{

	string a( "abc def ghi" ) ;
	string b = "jkl mno pqr" ;
	string c ;
	
	cout << "Cadeia a: " << a << endl;
	
	if ( c.empty() ) {
		cout << "A cadeia c está  vazia" << endl ;}
	else {
		cout << "Cadeia c: " << c << endl ;
	}
	
	c = a + b ;
	cout << "Cadeia c = a + b: " << c << endl;
	
	cout << "Comprimento da cadeia c: " << c.length() << endl ;
	cout << "Tamanho da cadeia c: " << c.size() << endl ;

	
	
	string d( c ) ;
	cout << "Cadeia d = c: " << d << endl ;
	//
	// Acessando um caracter da cadeia por vez.
	//
	for ( unsigned int i = 0 ; i < d.size() ; i++ ) {
		cout << "d[ " << i << "]=" << d[ i ] << endl ;
	}
	
	
	string h( "abc abc abc abc" );
	cout << "Cadeia h antes da substituicao: " << h << endl ;
	h.replace( 8 , 3 , "xyz") ;
	cout << "Cadeia h depois da substituicao: " << h << endl ;
	
	
	cout << "Procure \"x\" na cadeia h: " << h.find( "x" ) << endl ;
	cout << "Procure primeira ocorrencia de \"abc\" na cadeia h: " 	<< h.find_first_of( "abc" )	<< endl ;
	cout << "Procure eltima ocorrencia de \"abc\" na cadeia h: " 	<< h.find_last_of( "abc" )	<< endl ;

}
