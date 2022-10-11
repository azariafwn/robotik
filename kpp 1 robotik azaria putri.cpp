// NAMA		: azaria putri fawnia
// NRP		: 5024221038
// Jurusan	: teknik komputer

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

float mencari_V0(int r, int s)
{
	float vt;

    vt = sqrt(10 * r) + s;

  	return vt;
}
int speed_dgn_loss(int vt)
{
	int v0;

    if(vt >= 1 && vt <= 10){
        v0 = vt - 1;
    }else if(vt >= 11 && vt <= 20){
        v0 = vt - 3;
    }else if(vt >= 21 && vt <= 30){
        v0 = vt - 5;
    }

    return v0;

}

int main() {
    /* tulis kode utama kalian disini */
    int vt, r;


  	/* input adalah kecepatan tangensial maksimum roller */

  	int v0 = speed_dgn_loss(vt);
  	r = pow(v0,2)/10;
  	std :: cin >> vt;

  	float vtn = mencari_V0(r, vt - v0);
  	std :: cout << r << " " << vtn << std :: endl;
    return 0;
}
