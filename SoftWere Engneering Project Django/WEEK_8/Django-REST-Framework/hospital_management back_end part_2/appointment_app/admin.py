from django.contrib import admin
from . import models

class appointmentModelAdmin(admin.ModelAdmin):
    list_display = ['patient_name','doctor_name', 'appointent_types', 'appointent_status', 'symptom', 'time', 'cancel']

    def patient_name(self, obj):
        return obj.patient.user.first_name
    
    def doctor_name(self, obj):
        return obj.doctor.user.first_name

admin.site.register(models.Appointment ,appointmentModelAdmin)