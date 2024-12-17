#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int YIL = 5;      // 5 yýl
const int AY = 12;      // 12 ay

int main() {
    int ciro[YIL][AY];      // Ciro verilerini tutan dizi
    double ortCiro[YIL];    // Yýllýk ortalama ciro dizisi
    int yilSecim;

    srand(time(0)); // Rastgele sayý üretimi için seed

    // 1. Rastgele ciro verilerini oluþturma
    cout << "Son 5 yillik ciro verileri (100-5000 arasinda rastgele):\n";
    for (int i = 0; i < YIL; i++) {
        cout << i + 1 << ". yil: ";
        for (int j = 0; j < AY; j++) {
            ciro[i][j] = 100 + rand() % 4901; // 100-5000 arasý deðer
            cout << ciro[i][j] << " ";
        }
        cout << endl;
    }

    // 2. Yýllýk ortalama ciro hesaplama ve en yüksek ay tespiti
    for (int i = 0; i < YIL; i++) {
        int toplam = 0, maxCiro = 0, maxAy = 0;
        for (int j = 0; j < AY; j++) {
            toplam += ciro[i][j];
            if (ciro[i][j] > maxCiro) {
                maxCiro = ciro[i][j];
                maxAy = j + 1; // Ay sýrasý (1-12)
            }
        }
        ortCiro[i] = toplam / 12.0;
        cout << "\n" << i + 1 << ". yil ortalama ciro: " << ortCiro[i];
        cout << "\nEn yuksek ciro: " << maxCiro << " (" << maxAy << ". ay)\n";
    }

    // 3. Kullanýcýdan yýl seçimi ve çeyrek ortalamalarýný hesaplama
    cout << "\nHangi yilin (1-5 arasi) ceyrek ortalamalarini hesaplamak istersiniz? ";
    cin >> yilSecim;

    if (yilSecim >= 1 && yilSecim <= 5) {
        yilSecim--; // Dizinin sýfýr tabanlý indeksi için
        for (int ceyrek = 0; ceyrek < 4; ceyrek++) {
            int toplam = 0;
            for (int j = ceyrek * 3; j < (ceyrek + 1) * 3; j++) {
                toplam += ciro[yilSecim][j];
            }
            cout << ceyrek + 1 << ". Ceyrek ortalamasi: " << toplam / 3.0 << endl;
        }
    } else {
        cout << "Gecersiz yil secimi!";
    }

    return 0;
}
