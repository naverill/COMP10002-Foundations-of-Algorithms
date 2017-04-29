/* 
* People have titles, a given name, a middle name, and a family
* name, all of up to 50 characters each. People also have dates of
* birth (dd/mm/yyyy), dates of marriage and divorce (as many as
* 10 of each), and dates of death (with a flag to indicate whether or
* not they are dead yet). Each date of marriage is accompanied by
* the name of a person. Assuming that people work for less than
* 100 years each, people also have, for each year they worked, a year
* (yyyy), a net income and a tax liability (both rounded to whole
* dollars), and a date when that tax liability was paid.
* Countries are collections of people. Australia is expected to
* contain as many as 30,000,000 people; New Zealand as many as
* 6,000,000 people.

Exercise 1
	Give declarations that reflect the data scenario that is
	described.

	types: person, marriage, name, date, countries 
	person_t country[MAX_POP]

Exercise 2
	Write a function that calculates, for a specified country
	indicated by a pointer argument (argument 1) with a
	number of persons in it (argument 2), the average age of
	death. Do not include people that are not yet dead.


*/


#define MAX_NAME_LENGTH 50
#define MAX_MARRIAGES 10
#define MAX_YEARS_WORKED 100

typedef struct {
	int day;
	int month;
	int year;
} date_t;

/* Struct declaration */
typedef struct person person_t;

typedef struct {
	person_t *partner;
	date_t start;
	date_t end;
	int is_end;
} marriage_t;

typedef struct {
	int net_income;
	int tax_liability;
	date_t tax_aid;
} work_year_t;


typedef struct {
	char title[MAX_NAME_LENGTH + 1];
	char given_name[MAX_NAME_LENGTH+1];
	char middle_name[MAX_NAME_LENGTH+1];
	char family_name[MAX_NAME_LENGTH+1];
} name_t;

struct person {
	name_t name;
	marriage_t *marriages[MAX_MARRIAGES];
	date_t birth_date;
	date_t death_date;
	int is_dead;
	work_year_t *work_years[MAX_YEARS_WORKED];
};

typedef struct {
	person_t *population;
} country_t;

int main(int argc, char const *argv[])
{
	return 0;
}

double average_age_of_death(country_t country, int population){
	int dead_people = 0;
	int num_dead_years = 0;
	int i;
	person_t person;

	for (i=0; i< population; i++){
		person = country->population[i];

		if (person.is_dead){
			num_dead_years = (person.dead_date.year - person.birth_date.year);
			dead_people++;
		}
	}
	return (double) sum_dead_years / dead_people;
}

