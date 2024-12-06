#include <iostream>
using namespace std;

class USBDevice
{
private:
   int m_id;
public:
    USBDevice(int id) : m_id(id)
    {

    }
   int getID()
   {
       return m_id;
   }
};

class NetworkDevice
{
private:
    int m_id;
public:
    NetworkDevice(int id) : m_id(id)
    {

    }

    int getID()
    {
        return m_id;
    }
};

class USBWifi: public USBDevice, public NetworkDevice
{
public:
    USBWifi(int usbId, int networkId): USBDevice(usbId), NetworkDevice(networkId) {}
};

int main()
{
    USBWifi f54 (5442, 181742);
    cout << "Ce type de cle USB sans fil a une frequence de " << f54.getID() <<" Hz."<<endl;
    return 0;
}
