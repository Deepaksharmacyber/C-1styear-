# from pdf2docx import Converter

# old_pdf = "dsa1.pdf.pdf"
# new_doc = 'D:\\dsa\\new.docx'

# obj = Converter(old_pdf)
# obj.convert(new_doc)
# obj.close()

#"""D:\dsa\dsa1.pdf.pdf"""
#'D:\\dsa\\new.docx'


from docx2pdf import convert

convert("new.docx",'D:\\dsa\\new_pdf.pdf')
