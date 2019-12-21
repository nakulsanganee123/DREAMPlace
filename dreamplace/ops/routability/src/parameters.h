/// The function returns the mean wirelength weight for a net with 'num_pins' pins using wiring distribution map (WDM).
/// For more details, refer the paper 'RISA: Accurate and efficient placement routability modeling'
template <typename T>
inline T netWiringDistributionMapWeight(int num_pins)
{
    // WARNING: the 'low ... high' syntax below is a GCC extension
    // It is not guaranteed to be supported by other compilers
    switch (num_pins)
    {
        case 1 ... 3   : return 1.0000;
        case 4         : return 1.0828;
        case 5         : return 1.1536;
        case 6         : return 1.2206;
        case 7         : return 1.2823;
        case 8         : return 1.3385;
        case 9         : return 1.3991;
        case 10        : return 1.4493;
        case 11 ... 15 : return 1.6899;
        case 16 ... 20 : return 1.8924;
        case 21 ... 25 : return 2.0743;
        case 26 ... 30 : return 2.2334;
        case 31 ... 35 : return 2.3892;
        case 36 ... 40 : return 2.5356;
        case 41 ... 45 : return 2.6625;
        default        : return 2.7933;
    }
}