# HELPMediLife Insurance Console Application

This is a console-based insurance subscription and claim management system built as part of a programming test for the FDPRG001 course.

## 📌 Project Overview

The program simulates a health insurance system where users can:
- Subscribe to one of three insurance plans based on their age.
- Choose between **Annual Claim Limit** or **Lifetime Claim Limit**.
- Input personal and medical history details.
- Make medical claims based on their subscribed plan and view remaining coverage.

## 🧭 Program Navigation

When you run the program, you'll be prompted to:
1. Choose between subscribing to a plan or making a claim.
2. Input age (in years or days depending on choice).
3. View available insurance plans based on your age.
4. Decide whether to subscribe or not.
5. Provide personal information and health history.
6. (If claiming) Enter current plan and hospitalization details.
7. View calculated claim amount and remaining coverage.

## ▶️ Demonstration 

To see a sample run:

1. Clone the repository:
   ```bash
   git clone https://github.com/Wanxin2883/helpmedilife-insurance-console.git
   cd helpmedilife-insurance-console

2. Compile and run the program:
   ```bash
   gcc main.c -o insurance
   ./insurance

3. Follow the console prompts:
   - Input `1` to subscribe to an insurance plan.
   - Input age and follow the instructions to view eligibility.
   - Continue through each stage (plan selection, personal details, claims).

> A full walkthrough of the program including **flowcharts**, **pseudocode**, and **code explanation** can be found in the `HELPMediLife-documentation.docx` file in this repo.
