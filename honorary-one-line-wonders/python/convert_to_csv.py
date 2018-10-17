import csv; f=open(outfile, 'w'); w=csv.DictWriter(f, data.keys()); w.writeheader(); w.writerow(data)
