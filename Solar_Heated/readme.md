# **COLLECTING AREA FOR SOLAR-HEATED HOUSE**

## **PROBLEM**
An architect needs a program that can estimate the appropriate size for the collecting area of a solar-heated house. Determining collecting area size requires 
consideration of several factors, including the average number of heating degree 
days for the coldest month of a year (the product of the average difference between 
inside and outside temperatures and the number of days in the month), the heating requirement per square foot of floor space, the floor space, and the efficiency of 
the collection method. The program will have access to two data files. File hdd.txt 
contains numbers representing the average heating degree days in the construction 
location for each of 12 months. File solar.txt contains the average solar insolation 
(rate in BTU/day at which solar radiation falls on one square foot of a given location) 
for each month. The first entry in each file represents data for January, the second, 
data for February, and so on.

## **ANALYSIS**
The formula for approximating the desired collecting area is
    $A =  \frac{heat \ loss}{energy \ resource}$


In turn, heat loss is computed as the product of the heating requirement, the floor 
space, and the heating degree days. We compute the necessary energy resource by 
multiplying the efficiency of the collection method by the average solar insolation 
per day and the number of days.

In all of our previous programs, data for program inputs have come from the 
same source—either the keyboard or a file. In this program we will use three input 
sources: the two data files and the keyboard. We can now identify the problem’s 
data requirements and develop an algorithm.


## **DATA REQUIREMENTS**

### *Problem Inputs*
- Average heating degree days file 
- Average solar insolation file


  - **heat_deg_days** &rarr; average heating degree days  of coldest month.
  - **coldest_mon** &rarr;  coldest month $(number 1 .. 12)$ 
  - **solar_insol** &rarr;  average daily solar insolation $\frac{BTU}{ft^2}$ 
 coldest month
  - **heating_req** &rarr;  $\frac{BTU}{degree \ day \ \times \ ft^2}$ for planned type construction
  - **efficiency** &rarr; & of solar insolation converted to usable heat
  - **floor_space** &rarr; of solar insolation converted to usable heat square feet.

### *Problem Variables*
- `energy_resrc` &rarr; usable solar energy available in coldest month ($BTUs$ obtained from $1ft^2$ of collecting area)


### *Problem Outputs*
- `heat_loss` &rarr; $BTUs$ of heat lost by structure in coldest month.
- `collect_area` &rarr; approximate size $(ft^2)$ of collecting area needed.


## **DESIGN**
1. Determine the coldest month and the average heating degree days for this month.
2. Find the average daily solar insolation per $ft^2$ for the coldest month.
3. Get from the user the other problem inputs: `heating_req`, `efficiency`, and `floor_space`.
4. Estimate the collecting area needed.
5. Display results.


## *Step 1*
We will introduce three new variables to use in our refinement—a counter, `ct`, 
to keep track of our position in the heating degree days file, an integer variable to 
record file status, and an integer variable `next_hdd` to hold each heating degree 
days value in turn. 

### Additional Program Variables
`ct` &rarr; position in file \
`status` &rarr; input status \
`next_hdd` &rarr; one heating degree days value.

1.1 Scan first value from heating degree days file into `heat_deg_days` , and initialize `coldest_mon` to 1. 
1.2 Initialize `ct` to 2. \
1.3 Scan a value from file into `next_hdd`, saving status. \
1.4 As long as no faulty data or not act end of file, repeat
  - 1.5 if `next_hdd` is greater than heat_deg_days
    - 1.6 Copy next_hdd into `heat_deg_days`
    - 1.7 Copy `ct` into `coldest_mon`. 
  - 1.8  Increment `ct`.
  - 1.9 Scan a value from the file into `next_hdd`, saving `status`.

## *Step 4*
4.1 Calculate `heat_loss` as the product of `heating_req`, `floor_space`, and 
`heat_deg_days` . \
4.2 Calculate `energy_resrc` as the product of `efficiency` *(converted to hundredths)*, `solar_insol` , and the number of days in the coldest month.  
4.3 Calculate `collect_area` as `heat_loss` divided by `energy_resrc`. Round 
result to nearest whole square foot.
