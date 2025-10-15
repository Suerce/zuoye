typedef enum
{
    GPIO_SPEED_2Mz,
    GPIO_SPEED_10Mz,
    GPIO_SPEED_50Mz,
} GPIO;
struct GPIO_SPEED
{
    GPIO SPEED;
};
void GPIO_SructureInit(struct GPIO_SPEED *p)
{
    p->SPEED = GPIO_SPEED_2Mz;
}
int main()
{
    struct GPIO_SPEED p1;
    GPIO_SructureInit(&p1);
    return 0;
}