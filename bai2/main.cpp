#include <iostream>
#include "bai2.cpp"  // Bao gồm file bai2.cpp

using namespace std;

int main() {
    // Khởi tạo các phòng với mã phòng khác nhau
    Deluxe a(1, 300000, 20000);
    Deluxe b(2, 450000, 25000);
    Premium c(3, 80000);
    Premium d(5, 90000);
    Business e(6);

    // Tính doanh thu cho từng loại phòng
    int deluxe = a.revenue() + b.revenue();
    int premium = c.revenue() + d.revenue();
    int business = e.revenue();

    // Xác định loại phòng có doanh thu cao nhất
    string maxRoom;
    int maxRevenue = max({deluxe, premium, business});
    
    if (maxRevenue == deluxe) {
        maxRoom = "Deluxe"; // maxRoom là tên loại phòng
    } else if (maxRevenue == premium) {
        maxRoom = "Premium";
    } else {
        maxRoom = "Business";
    }

    // In ra kết quả
    cout << "Loai phong co doanh thu cao nhat la " << maxRoom
         << " voi doanh thu la " << maxRevenue << endl;

    return 0;
}
