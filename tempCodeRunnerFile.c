unsigned setbits(unsigned x, int p, int n, unsigned y) 
{
    for (int i = 0; i < n; ++i) 
    {
        // Obține ultimul bit al lui y
        unsigned lastBitY = y & 1;

        // Setează bitul în x la poziția p - i
        x = (x & ~(1u << (p - i))) | (lastBitY << (p - i));

        // Deplasează y cu un bit spre dreapta pentru a extrage următorul bit
        y >>= 1;
    }

    return x;
}