def temp_conversion(cels):
    t= cels * 9/5 + 32    #Convert Celsius to Fahrenheit
    return (t)

def lenght_conversion(km):
    l=km * 0.621371   #Convert Kilometers to Miles
    return l

def weight_conversion(kg):
    w=kg * 2.20462  #Convert Kilograms to Pounds
    return w

def byte_conversion(mb):
    m= mb / 1024   #Convert Megabytes to Gigabytes
    return m


print("Select a conversion category:")
print("1. Temperature (Celsius - Fahrenheit)")
print("2. Length (Kilometers - Miles)")
print("3. Weight (Kilograms - Pounds)")
print("4. Data Storage (Megabytes - Gigabytes)")

choice = input("Enter your choice (1-4): ")

if choice == '1':
    cels = float(input("Enter temperature in Celsius: "))
    fa=temp_conversion(cels)
    print(cels ,"°C = ", fa, "°F")

elif choice == '2':
    km = float(input("Enter distance in Kilometers: "))
    miles=lenght_conversion(km)
    print(km," km = ",miles," miles")

elif choice == '3':
    kg = float(input("Enter weight in Kilograms: "))
    po=weight_conversion(kg)
    print(kg," kg = ",po,"pounds")

elif choice == '4':
    mb = float(input("Enter size in Megabytes: "))
    gb=byte_conversion(mb)
    print(mb ,"MB = ",gb,"GB")
    
else:
    print("Invalid choice! Please select from 1 to 4.")


