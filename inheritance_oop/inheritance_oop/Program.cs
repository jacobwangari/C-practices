using System;

class Program
{
    static void Main()
    {
        Bank_Account mwas = new Bank_Account();
        OverdraftAccount jac = new OverdraftAccount();
        mwas.CreateAccount();
        jac.CreateAccount();
    }
}

    class Bank_Account
    {
    public string Ownername;
    public string AccountNumber;
    public double Balance;
    public Bank_Account()
    {
        
    }

    public Bank_Account(string o,string a, double b=0)
    {
        Ownername = o;
        AccountNumber = a;  
        Balance = b;    
    }
    public void CreateAccount()
    {
        Console.WriteLine("CREATE YOUR BANK ACCOUNT ");
        Console.WriteLine("Enter your name : ");
        Ownername = Console.ReadLine();
        Console.WriteLine("Create your preffered account number :");
        AccountNumber = Console.ReadLine();
        Deposit();
        Withdrawal();

        Console.WriteLine("Your balance is : {0}",GetBalance()); 
        
    }
    public void Deposit()
    {
        Console.WriteLine("Enter amount to deposit : ");
        double T = Convert.ToDouble(Console.ReadLine());
        Balance =+ T;


    }
    public virtual void Withdrawal()
    {
        Console.WriteLine("Enter amount to withdraw : ");
        double T = Convert.ToDouble(Console.ReadLine());

        if (T > Balance)
        {
            Console.WriteLine("You balance is insufficient to withdraw {0}", T);
        }
        else
        {
            Balance -= T;
        }
    }
   public double GetBalance()
        {
        return Balance;
        }
    

}

class OverdraftAccount : Bank_Account
{
    double CreditLimit = 0;

    public override void Withdrawal()
    {
        CreditLimit = 3 * GetBalance();
        double DispensableAmount = Balance + CreditLimit;
        Console.WriteLine("Enter amount to withdraw : ");
        double T = Convert.ToDouble(Console.ReadLine());

        if (T > DispensableAmount)
        {
            Console.WriteLine("You balance is insufficient to withdraw {0}", T);
        }
        else
        {
            Balance -= T;
        }
    }
}
    
