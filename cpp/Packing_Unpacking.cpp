#include <iostream>
#include <cstring>
#include <arpa/inet.h>

using namespace std;

int main()
{
    // int x = 0x12345678;
    int x = 0x00010000;                 // a number that is in a little-endian machine
    unsigned char buffer[sizeof(int)];  // prepare a buffer byte array to recieve x's content
    int networkByteOrder = htonl(x);    // Convert to network byte order
    cout << "x = " << x << ", and networkByteOrder = " << networkByteOrder << endl;
    //       x = 65536, and networkByteOrder = 256
    memcpy(buffer, &networkByteOrder, sizeof(int)); // Pack the integer
    int y;
    memcpy(&y, buffer, sizeof(int));    // Unpack the integer
    int nativeByteOrder = ntohl(y);     // Convert back to native byte order
    cout << "y = " << y << ", and nativeByteOrder = " << nativeByteOrder << endl;
    //       y = 256, and nativeByteOrder = 65536
    return 0;
}
