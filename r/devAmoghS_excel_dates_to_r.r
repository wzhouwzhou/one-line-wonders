excel_date_to_r_date <- function(excel_date, format)
{
  #excel_date is the number of days since the 0th January 1900.  See
  #http://www.stat.auckland.ac.nz/~paul/ItDT/HTML/node67.html
  strftime(as.Date(as.numeric(excel_date) - 2, origin = "1900-01-01"), format)
}
