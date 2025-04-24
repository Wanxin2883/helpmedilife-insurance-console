#include <stdio.h>

int plan, choice1, choice2, choice3, age, limits, result, amount, days;

int main()
{
    printf("\n Key in 1 to subscribe to an insurance plan. \n");
    printf("\n Key in 2 to make a medical claim. \n");

    while (choice1 != 1 && choice1 != 2){

        printf("\n Enter your choice: ");
        scanf(" %d", &choice1);

        if (choice1 == 1){

            printf ("\n Key in 1 when your age is more than 1 years old. \n");
            printf ("\n Key in 2 when your age is less than 1 years old. \n");

            while (choice2 != 1 && choice2 != 2){

                printf("\n Enter your choice: ");
                scanf (" %d", &choice2);

                if (choice2 == 1){
                    printf("\n Enter your age in years: ");
                    scanf(" %d", &age);

                    //display the plans and benefits based on based on his/her eligibility
                    if (age >= 1 && age <= 20){
                        eligible_insurance180();
                        if (plan == 2){
                            return 0;
                        }
                    }
                    //display the plans and benefits based on based on his/her eligibility
                    else if (age >= 21 && age <= 40){
                        printf("\n You are eligible for Insurance160 and Insurance180. \n");
                        insurance180();
                        insurance160();
                        other_conditions();

                        //prompt for the plan that he/she want to subscribe
                        while (plan != 1 && plan != 2 && plan != 3){

                            printf("\n 1 - Insurance180 \n 2 - Insurance160 \n 3 - Not all of above \n");
                            printf("\n Which plan would you like to subscribe?: ");
                            scanf(" %d", &plan);

                            if (plan == 3){
                                printf("\n Thank You for visiting HELPMEDILife Health Insurance Company. \n");
                                return 0;
                            }
                            else if (plan != 1 && plan != 2 && plan != 3){
                                printf("\n Your input is invalid. \n");
                            }
                        }
                    }
                    //display the plans and benefits based on based on his/her eligibility
                    else if (age >= 41 && age <= 54){
                        printf("\n You are eligible for all type of insurance plans.");
                        insurance180();
                        insurance160();
                        insurance130();
                        other_conditions();

                        //prompt for the plan that he/she want to subscribe
                        while (plan != 1 && plan != 2 && plan != 3 && plan != 4){

                            printf("\n 1 - Insurance180 \n 2 - Insurance160 \n 3 - Insurance130 \n 4 - Not all of above \n");
                            printf("\n Which plan would you like to subscribe?: ");
                            scanf(" %d", &plan);

                            if (plan == 4){
                                printf("\n\n Thank You for visiting HELPMEDILife Health Insurance Company. \n");
                                return 0;
                            }
                            else if (plan != 1 && plan != 2 && plan != 3 && plan != 4){
                                printf("\n Your input is invalid. \n");
                            }
                        }
                    }
                    else{
                        printf("\n Sorry, you are not eligible for any insurance plan.\n");
                        printf("\n\n Thank You for visiting HELPMEDILife Health Insurance Company. \n");
                        return 0;
                    }
                }
                else if (choice2 == 2){
                    printf("\n Enter your age in days: ");
                    scanf(" %d", &age);

                    if (age <= 14){
                        printf("\n Sorry, you are not eligible for any insurance plan.\n");
                        printf("\n Thank You for visiting HELPMEDILife Health Insurance Company. \n");
                        return 0;
                    }
                    //display the plans and benefits based on based on his/her eligibility
                    else if (age <= 364 && age >= 15){
                        eligible_insurance180();
                        if (plan == 2){
                            return 0;
                        }
                    }
                }
                else {
                    printf("\n Your input is invalid. \n");
                }
            }
            //prompt for the claim limit types
            printf("\n *** Noted that Annual Claim Limits can claim until the age of 60 only; however, Lifetime Claim Limit can claim for life but until the stated amount is exhausted. *** \n");

            while (limits != 1 && limits != 2){

                printf("\n 1 - Annual Claim Limits \n 2 - Lifetime Claim Limits. \n");
                printf("\n Which types of claim limits would you like to subscribe?: ");
                scanf(" %d", &limits);

                if (limits != 1 && limits != 2){
                    printf("\n Your input is invalid. \n");
                }
            }
            // prompt for personal details
            char name[100], nationality[100], ic[100], birth_date[100], gender, num[100], address[100], asthma, diabetes, heart, hyper, obes;

            printf("\n\n Enter your personal details: ");
            printf("\n\n Full Name               : ");
            scanf(" %[^\n]s", name);

            printf("\n Nationality             : ");
            scanf(" %s", &nationality);

            printf("\n IC Number               : ");
            scanf(" %s", &ic);

            printf("\n Date of Birth (DD/MM/YY): ");
            scanf(" %s", &birth_date);

            while (gender != 'M' && gender != 'F'){
                printf("\n Gender (M/F)            : ");
                scanf(" %c", &gender);

                if (gender != 'M' && gender != 'F'){
                    printf("\n Your input is invalid.\n");
                }
            }

            printf("\n House Address           : ");
            scanf(" %[^\n]s", address);

            printf("\n Contact Number          : ");
            scanf(" %s", &num);

            printf("\n\n Health History (Y/N)    : ");

            while (asthma != 'Y' && asthma != 'N'){
                printf("\n Asthma                  : ");
                scanf(" %c", &asthma);

                if (asthma != 'Y' && asthma != 'N'){
                    printf("\n Your input is invalid. \n");
                }
            }
            while (diabetes != 'Y' && diabetes != 'N'){
                printf("\n Diabetes                : ");
                scanf(" %c", &diabetes);

                if (diabetes != 'Y' && diabetes != 'N'){
                    printf("\n Your input is invalid. \n");
                }
            }
            while (heart != 'Y' && heart != 'N'){
                printf("\n Heart disease           : ");
                scanf(" %c", &heart);

                if (heart != 'Y' && heart != 'N'){
                    printf("\n Your input is invalid. \n");
                }
            }
            while (hyper != 'Y' && hyper != 'N'){
                printf("\n Hypertension            : ");
                scanf(" %c", &hyper);

                if (hyper != 'Y' && hyper != 'N'){
                    printf("\n Your input is invalid. \n");
                }
            }
            while (obes != 'Y' && obes != 'N'){
                printf("\n Obesity                 : ");
                scanf(" %c", &obes);

                if (obes != 'Y' && obes != 'N'){
                    printf("\n Your input is invalid. \n");
                }
            }

            //displaying the subscriber's details
            printf("\n\n Below is your personal details and the plan to which you have subscribed.\n\n");

            printf(" Subscriber's Details: ");
            printf("\n Full Name                : %s", name);
            printf("\n Nationality              : %s", nationality);
            printf("\n IC Number                : %s", ic);
            printf("\n Date of Birth (DD/MM/YY) : %s", birth_date);
            printf("\n Age                      : %d", age);
                if (choice2 == 1){
                    printf(" years old");
                }
                else {
                    printf(" days");
                }
            printf("\n Gender                   : %c", gender);
            printf("\n House Address            : %s", address);
            printf("\n Contact Number           : %s", num);

            printf("\n\n Health History (Y/N)  : ");
            printf("\n Asthma                : %c", asthma);
            printf("\n Diabetes              : %c", diabetes);
            printf("\n Heart disease         : %c", heart);
            printf("\n Hypertension          : %c", hyper);
            printf("\n Obesity               : %c", obes);

            // displaying his/her subscribed plan details and benefits
            printf("\n\n\n The plan you would like to subscribe is: ");

            if (limits == 1){
                if (plan == 3){
                    printf("\n\n HELPMediLife Health Insurance Plan: Insurance130");
                    printf("\n\n Monthly fee                         : 130");
                    printf("\n Annual Claim Limit                  : 100,000");

                    printf("\n\n Hospitalisation and Surgical Benefits");
                    printf("\n\n Room charges                        : RM 120 per day");
                    printf("\n Intensive Care Unit (ICU) Charges   : RM 250 per day \n\n");
                }
                else if (plan == 2){
                    printf("\n\n HELPMediLife Health Insurance Plan: Insurance160");
                    printf("\n\n Monthly fee                         : 160");
                    printf("\n Annual Claim Limit                  : 120,000");

                    printf("\n\n Hospitalisation and Surgical Benefits");
                    printf("\n\n Room charges                        : RM 150 per day");
                    printf("\n Intensive Care Unit (ICU) Charges   : RM 400 per day \n\n");
                }
                else{
                    printf("\n\n HELPMediLife Health Insurance Plan: Insurance180");
                    printf("\n\n Monthly fee                         : 180");
                    printf("\n Annual Claim Limit                  : 200,000");

                    printf("\n\n Hospitalisation and Surgical Benefits");
                    printf("\n\n Room charges                        : RM 200 per day");
                    printf("\n Intensive Care Unit (ICU) Charges   : RM 700 per day \n\n");
                }
            }
            else if (limits == 2){
                if (plan == 3){
                    printf("\n\n HELPMediLife Health Insurance Plan: Insurance130");
                    printf("\n\n Monthly fee                         : 130");
                    printf("\n Lifetime Claim Limit                : 500,000\n");

                    printf("\n\n Hospitalisation and Surgical Benefits");
                    printf("\n\n Room charges                        : RM 120 per day");
                    printf("\n Intensive Care Unit (ICU) Charges   : RM 250 per day \n\n");
                }
                else if (plan == 2){
                    printf("\n\n HELPMediLife Health Insurance Plan: Insurance160");
                    printf("\n\n Monthly fee                         : 160");
                    printf("\n Lifetime Claim Limit                : 600,000\n");

                    printf("\n\n Hospitalisation and Surgical Benefits");
                    printf("\n\n Room charges                        : RM 150 per day");
                    printf("\n Intensive Care Unit (ICU) Charges   : RM 400 per day \n\n");
                }
                else{
                    printf("\n\n HELPMediLife Health Insurance Plan: Insurance180");
                    printf("\n\n Monthly fee                         : 180");
                    printf("\n Lifetime Claim Limit                : 2,000,000\n");

                    printf("\n\n Hospitalisation and Surgical Benefits");
                    printf("\n\n Room charges                        : RM 200 per day");
                    printf("\n Intensive Care Unit (ICU) Charges   : RM 700 per day \n\n");
                }
            }
        }
        else if (choice1 == 2){

            while (plan != 1 && plan != 2 && plan != 3){
                printf("\n 1 - Insurance180 \n 2 - Insurance160 \n 3 - Insurance130 \n");
                printf ("\n Enter your current types of insurance plan: ");
                scanf(" %d", &plan);

                if (plan != 1 && plan != 2 && plan != 3){
                    printf("\n Your input is invalid. \n");
                }
            }

            while (limits != 1 && limits != 2){
                printf("\n 1 - Annual Claim Limits \n 2 - Lifetime Claim Limits. \n");
                printf("\n Enter your current types of claim limits: ");
                scanf(" %d", &limits);

                if (limits != 1 && limits != 2){
                    printf("\n Your input is invalid. \n");
                }
            }

            if (plan == 1){
                if (limits == 1){
                    amount = 200000;
                    medical_claims();
                }
                else {
                    amount = 2000000;
                    medical_claims();
                }
            }
            else if (plan == 2){
                if (limits == 1){
                    amount = 120000;
                    medical_claims();
                }
                else {
                    amount = 600000;
                    medical_claims();
                }
            }
            else{
                if (limits == 1){
                    amount = 100000;
                    medical_claims();
                }
                else {
                    amount = 500000;
                    medical_claims();
                }
            }
        }
        else {
            printf ("\n Your input is invalid. \n");
        }
    }
}

//details and benefits of the insurance plans
int insurance180(){
    printf("\n ________________________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("\n\n HELPMediLife Health Insurance Plan  : Insurance180");
    printf("\n\n Monthly fee                         : 180");
    printf("\n Annual Claim Limit                  : 200,000");
    printf("\n Lifetime Claim Limit                : 2,000,000\n");

    printf("\n\n Hospitalisation and Surgical Benefits");
    printf("\n\n Room charges                        : RM 200 per day");
    printf("\n Intensive Care Unit (ICU) Charges   : RM 700 per day");
    printf("\n\n ________________________________________________________________________________________________________________________________________________________________________________________________\n");
}
int insurance160(){
    printf("\n\n HELPMediLife Health Insurance Plan  : Insurance160");
    printf("\n\n Monthly fee                         : 160");
    printf("\n Annual Claim Limit                  : 120,000");
    printf("\n Lifetime Claim Limit                : 600,000\n");

    printf("\n\n Hospitalisation and Surgical Benefits");
    printf("\n\n Room charges                        : RM 150 per day");
    printf("\n Intensive Care Unit (ICU) Charges   : RM 400 per day");
    printf("\n\n ________________________________________________________________________________________________________________________________________________________________________________________________\n");
}
int insurance130(){
    printf("\n\n HELPMediLife Health Insurance Plan  : Insurance130");
    printf("\n\n Monthly fee                         : 130");
    printf("\n Annual Claim Limit                  : 100,000");
    printf("\n Lifetime Claim Limit                : 500,000\n");

    printf("\n\n Hospitalisation and Surgical Benefits");
    printf("\n\n Room charges                        : RM 120 per day");
    printf("\n Intensive Care Unit (ICU) Charges   : RM 250 per day");
    printf("\n\n ________________________________________________________________________________________________________________________________________________________________________________________________\n");
}
int other_conditions(){
    printf("\n\n *** Noted that all subscribers are eligible for Hospital Supplies and Services, Surgical Fees, and other fees of any amount as long as the charges are within their plan's coverage amount. *** \n");
}

int medical_claims(){

        printf("\n Enter the number of days admitted in hospital: ");
        scanf ("%d", &days);

        while (choice3 != 1 && choice3 != 2){
            printf("\n Are you admitted in \n 1 - Regular room \n 2 - Intensive Care Unit (ICU) \n\n Enter your choice: ");
            scanf ("%d", &choice3);

            if (choice3 == 1){
                if (plan == 3){
                    result = days*120;
                }
                else if (plan == 2){
                    result = days*150;
                }
                else {
                    result = days*200;
                }
            }
            else if (choice3 == 2){
                if (plan == 3){
                    result = days*250;
                }
                else if (plan == 2){
                    result = days*400;
                }
                else {
                    result = days*700;
                }
            }
            else{
                printf ("\n Your input is invalid. \n");
            }
        }
    if (amount - result > 0){
        printf ("\n You can claim up to RM %d \n", result);
        printf ("\n Your balance amount of medical claims is RM %d \n", amount-result);
    }
    else{
        printf("\n Sorry, the amount of medical claims is not within your plan's coverage amount. \n");
    }
}

int eligible_insurance180(){
    printf("\n You are eligible for Insurance180. \n");
    insurance180();
    other_conditions();

    //prompt for the plan that he/she want to subscribe
    while (plan != 1 && plan != 2){
        printf("\n 1 - Yes \n 2 - No \n");
        printf("\n Do you want to subscribe to Insurance180?: ");
        scanf(" %d", &plan);

        if (plan == 2){
            printf("\n\n Thank You for visiting HELPMEDILife Health Insurance Company. \n");
        }
        else if (plan != 1 && plan != 2){
            printf("\n Your input is invalid. \n");
        }
    }
}
