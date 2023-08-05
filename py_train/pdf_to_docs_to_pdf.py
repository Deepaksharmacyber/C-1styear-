from pdf2docx import Converter

old_pdf ="""D:\dsa\dsa1.pdf.pdf"""
new_doc = 'D:\\dsa\\new.docx'

obj = Converter(old_pdf)
obj.convert(new_doc)
obj.close()