int timeRequiredToBuy(int* tickets, int ticketsSize, int k)
{
    int j;
    int num;
    int count;

    count = tickets[k];
    num = 0;
    while(count > 0)
    {
        j = 0;
        while(j < ticketsSize)
        {
            if(tickets[k] == 0)
                return(num);
            while(tickets[j] == 0 && tickets[j])
                j++;
            if(tickets[j] != 0)
            {
                tickets[j]--;
                num++;
            }
            j++;
        }
        count--;
    }
    return(num);
}