struct USER
{
    string id[15];
    string username[15];
    string NoInet[15];
    string NoTelp[15];
    string alamat[15];
};

struct time
{
    int jam;
    int menit;
    int detik;
} mulai,selesai,selisih;

void waktu
{

    cout<<"Mulai======"<<endl;
    cout<<"Jam :";
    cin>>mulai.jam;
    cout<<"Menit :";
    cin>>mulai.menit;
    cout<<"Detik :";
    cin>>mulai.detik;
    cout<<"Waktu Masuk "<<mulai.jam<<":"<<mulai.menit<<":"<<mulai.detik<<endl;

    cout<<"Selesai======"<<endl;
    cout<<"Jam :";
    cin>>selesai.jam;
    cout<<"Menit :";
    cin>>selesai.menit;
    cout<<"Detik :";
    cin>>selesai.detik;
    cout<<"Waktu Masuk "<<selesai.jam<<":"<<selesai.menit<<":"<<selesai.detik<<endl;

    if ((selesai.detik - mulai.detik) < 0)
        selisih.detik = (60 + selesai.detik) - mulai.detik;
    else
        selisih.detik = keluar.detik - masuk.detik;

    if ((selesai.menit- mulai.menit) < 0)
        selisih.menit= (60 + selesai.menit) - mulai.menit;
    else
        selisih.menit = selesai.menit- mulai.menit;

    if ((selesai.jam- mulai.jam) < 0)
        selisih.jam= (60 + selesai.jam) - mulai.jam;
    else
        selisih.jam= selesai.jam- mulai.jam;

    cout<<"Total Waktu"<<selisih.jam<<":"<<selisih.menit<<":"<<selisih.detik;
}
