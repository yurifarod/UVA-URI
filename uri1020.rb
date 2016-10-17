dias = gets.to_i

anos = dias/365
dias = dias - (anos*365)
meses = dias/30
dias = dias - (meses*30)

puts "#{anos} ano(s)"
puts "#{meses} mes(es)"
puts "#{dias} dia(s)"
