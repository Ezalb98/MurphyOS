//Function to print strings
void write_string( int colour, const char *string )
{
    volatile char *video = (volatile char*)0xB8000;
    while( *string != 0 )
    {
        *video++ = *string++;
        *video++ = colour;
    }
}

extern "C" void _start(){
    *(char*)0xb8000 = 'Q';
    write_string(9, "Murphy OS V. a0.01");
    return;
}

