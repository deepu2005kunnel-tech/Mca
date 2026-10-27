current_year = 2026
Final_year =int(input("Final_year="))
print("leap year from {current_year}to{final_year}:")
for year in range(current_year,Final_year+1):
    if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
        print(year)