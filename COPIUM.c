#include<stdio.h>
#include<math.h>
void main()
{
    int k;
    k=1;
    while(k==1)
    {
     int p;
     printf("What Do You Want To Do? \n (0), (1)Number Generator, (2)Reversal, (3)Quadratic, (4)ArmDrome, (5), (6)Area, (7)Digit Sum, (8)Sum Of Even Num, (9)Fahrenheit\n");
     scanf("%d",&p);
     switch(p)
     {
      case 0:
      {
                int a[100];
	       int b,i,c,ele,loc,del;
       	printf("what do u want to do?\n insertion(1)\n deletion(2)\n");
	      scanf("%d",&c);
	      switch(c)
        {
	       case 1:
         printf("enter the size of the array\n");
         scanf("%d",&b);
         printf("enter the %d array elements\n",b);
         for(i=0;i<b;i++)
         {
		      scanf("%d",&a[i]);
	       }  
         printf("the list is\n");
         for(i=0;i<b;i++)
         {
	        printf("%d\n",a[i]);
         }
          printf("enter the element to insert\n");
          scanf("%d",&ele);
          printf("enter the location of the %d to be inserted \n",ele);
          scanf("%d",&loc);
          loc--;
          for(i=b-1;i>=loc;i--)
          {
	         a[i+1]=a[i];
          }
          a[loc]=ele;
          printf("list after insertion ");
          for(i=0;i<b+1;i++)
          {
            printf("%d ",a[i]);
          }
          break;
      case 2:
       printf("enter the size of the array\n");
       scanf("%d",&b);
       printf("enter the %d elements of the array\n",b);
       for(i=0;i<(b--);i++)
       {
	      scanf("%d ",&a[i]);
       }
       printf("the list of the elemnts is\n");
       for(i=0;i<(b);i++)
       {
	      printf("%d ",a[i]);
       }
       printf("\nenter an element to delet");
       scanf("%d",&del);
       break;
      }
       break;     
      }
      case 1:
      {
       int o;
       printf("What Do You Want To Generate?\n (1)Fibonacci Series, (2)Even Numbers, (3)Prime Number,\n");
       scanf("%d",&o);
       if(o==1)
       {
        int a,b,c,d,sum;
        a=1;
        b=0;
        sum=0;
        d=2;
        printf("How Many Values Of Fibonacci Series Do You Want?\n");
        scanf("%d",&c);
        printf("0\n1\n");
        while(d<c)
        {
         sum = a + b;
         b = a;
         a = sum;
         d++;
         printf("%d\n",sum);
        }
       } 
       else if(o==2)
       { 
        int a,b,n;
        a=0;
        b=0;
        printf("How Many Even Numbers Do You Want? ");
        scanf("%d",&n);
        while(a<n)
        {
         a++;
         printf("%d\n",b);
         b=b+2;
        }
       }
       else if(o==3) 
       {
        int a,b,c,d;
        printf("How many prime numbers do you want?");
        scanf("%d",&d);
        for(a=1;a<=d;a++)
        {
         printf("\nF1 a=%d b=%d\n",a,b);
         c=0;
         for(b=2;b<=a/2;b++)
         {
          printf("\nF2 a=%d b=%d\n",a,b);
          if(a%b==0)
          {
            c++;
            break;
          }
         }
          if(c==0 && a!=1)
          printf("%d\n",a); 
          printf("\nF3 a=%d b=%d\n",a,b);
        }
       }
       break;
      }
      case 2:
      {
       int d,n,s;
       s = 0;
       printf("enter any value ");
       scanf("%d",&n);
       do
       {
      	d=n%10;
        s=s*10+d;
        n=n/10;
       }
        while(n>0);
        printf("The Reversed Value Is %d",s);
        break;
      }
      case 3:
      {
       float a,b,c,D,x,y;
       int z;
       z=1;
       while(z==1)
       {
	      printf("enter the values of a, b and c ");
        scanf("%f%f%f",&a,&b,&c);
        printf("the entered values are %f, %f and %f\n",a,b,c);
        D = (b*b)-(4*a*c);
        printf("D = %f\n",D);
        if(D>0)
        {
	       printf("it has real and distinct roots\n");
         x=(-b+(sqrt(D)))/2*a;
         y=(-b-(sqrt(D)))/2*a;
         printf("The Roots Are %f %f\n",x,y);
        }
         else 
         if(D==0)
        {
	       printf("it has real and equal roots\n");
         x=(-b+(sqrt(D)))/2*a;
         y=(-b-(sqrt(D)))/2*a;
         printf("The Roots Are %f %f\n",x,y);
         printf("it has imaginary roots\n");
        }
         printf("Do you want to try a different value?\n(1)Yes, (0)No\n");
         scanf("%d",&z);
       }
       break;
      }
      case 4:
      {
       int o;
       printf("What do you want to check for?\n (1)Palindrome, (2)Armstrong,\n");
       scanf("%d",&o);
       if(o==1)
       { 
        int n,s,d,a;
        s=0;
        printf("enter a value ");
        scanf("%d",&n);
        a=n;
        while(n>0)
        {
         d=n%10;
         s=s*10+d;
         n=n/10;
        } 
        if(a==s)
        printf("%d Is A Palindrome Number\n",a);
        else
        printf("%d Is Not A Palindrome Number",a);
       }
       else if(o==2)
       {
        int a=0,b=0,c=0,d=0,z,y,o,p;
        printf("Enter a 3/4 digit number ");
        scanf("%d",&y);
        p=y;
        while(y>0)
        {
         z=y%10;
         y=y/10;
        if(a==0)
         {
          a=z;
         } 
         else if(b==0)
         {
          b=z;
         }
         else if(c==0)
         {
          c=z;
         } 
         else if(d==0)
         {
          d=z;
         }
        }
        if(d==0)
        {
	       o=(a*a*a)+(b*b*b)+(c*c*c);
        }
        else
        {
	       o=(a*a*a*a)+(b*b*b*b)+(c*c*c*c)+(d*d*d*d);
        } 
        if(o==p)
        {
	       printf("It is a armstrong number");
        }
        else
        {
	       printf("It is not a armstrong number");
        } 
       }
       break;
      }
      case 5:
      {
       break;
      }
      case 6:
      {
       int p;
       printf("What Do You Want The Area Of?\n(1)Triangle, (2)Rectangle,\n");
       scanf("%d",&p);
       if(p==1)
       {
        int b,h,area;
        printf("enter the base and height ");
        scanf("%d%d",&b,&h);
        area = (b * h)/2;
        printf("The Area Is %d",area);
       }
       else if(p==2)
       {
        int l,b,area;
        printf("Enter The Length And Breadth ");
        scanf("%d%d",&l,&b);
        area = l * b;
        printf("The Area Is %d",area);
       }
       break;
      }
      case 7:
      {
       int d,n,s;
       s = 0;
       printf("enter any value ");
       scanf("%d",&n);
       printf("entered value is %d\n",n);
       while(n>0)
       {
	      d=n%10;
        s=s+d;
        n=n/10;
       }
       printf("The Sum Of Digits Is %d",s);
       break;
      }
      case 8:
      {
       int a,b,c,d;
       c=0;
       d=0;
       printf("How many even numbers do you want the sum of?");
       scanf("%d",&a);
       for(b=1;b<a;b++)
       {
        d=d+2;
        c=c+d;
       }
       printf("\n%d",c);
       break;
      }
      case 9:
      {
       float C,F;
       printf("Enter The Temperature In Celcius \n");
       scanf("%f",&C);
       F=32+((9/5)*C);
       printf("The Temperature In Fahrenheit Is %f",F);
       break;      
      }
      default:
      {
        printf("Enter A Valid Case, ");
      }
     } 
      printf("\nDo You Want To Run Copium Again?\n(1)Yes, (0)No\n");
      scanf("%d",&k);
    }
}
