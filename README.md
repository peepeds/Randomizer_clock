This Randomizer project is build with the time seed method 

---
Demo

Init demo : https://youtu.be/Flag261Xi8I 

link demo in line 6 for me it's got enough to submitted as solution. As my Explanation say that "We can     delete the 2 slash / comments if we want to see the output. May be that Demo not be accepted because It'S can be consider that the demo / solution is not Transparant enough  to say that the data at Sample.txt is the data we gets from that demo. So Allow me not to Delete the past demo link. 

revision demo : https://youtu.be/KtxYbc0f6xE

---
Explanation
I not sure I can Explained it perfectly with English , so I will Explained it with Bahasa 

Fungsi Randomizer / penghasil angka acak ini dijalankan menggunakan sistem  waktu saat ini sebagai "seed" untuk menghasilkan berapa angka yang akan dihasilkan nantinya

Angka adalah waktu yang berjalan terus menerus dan kita sulit menentukan secara eksak nilai dari angka waktu saat ini karena tidak ada batasnya , terutama karena menggunakan waktu berjalan berdasarkan EPOCH

Operator Modulo digunakan untuk menentukan berapa jumlah angka yang akan dihasilkan , oleh karena itu modulo sebagai rentang / range untuk hasil pengacakan yang diinginkan (end). Setelah rentang di dapatkan kita hanya perlu mengeset / mengatur dari angka berapa rentang tersebut akan dimulai(start)

Secara Singkat.
Kode ini dibangun berdasarkan 2 aspek , waktu dan modulo
1. Waktu
   Waktu digunakan untuk membangun Seed / Faktor Pengacak. Nilainya selalu berubah setiap saat dan tidak ada secara eksak nilai / waktu saat program dijalankan 
2. Modulo
   Modulo digunakan untuk menentukan rentang angka yang diinginkan. 
   Variable start digunakan untuk menampung nilai awal yang ingin dikeluarkan
   Variable end digunakan untuk menampung batas akhir yang ingin dikeluarkan
3. Keacakan 
    time sebagai seeder memastikan nilai seed selalu dan pasti berubah setiap waktu. Ini berarti setiap kali program dijalankan, nilai seednya akan berbeda, memberikan variasi acak  pada hasil pengacakan.
    Submission kali ini juga menjamin faktor pengacakan lebih baik. Hal ini disebabkan Seeder di upgrade dari tingkat Second ke micro second. Sehingga bila program di jalankan di device yang berbeda akan memiliki dua jaminan pengacakan. yang pertama hampir mustahil bahwa program dijalankan bersamaan sampai presisi micro second , yang kedua seeder diambil melibatkan faktor perangkat user juga , kecepatan CPU mempengaruhi seeder yang dihasilkan , disebabkan allokasi thread dan RAM saat itu juga mempengaruhi seberapa cepat program dijalankan dan seed didapat.  
