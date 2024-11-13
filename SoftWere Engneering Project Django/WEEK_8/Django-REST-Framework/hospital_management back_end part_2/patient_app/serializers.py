from rest_framework import serializers
from . import models

class PatientSerializers(serializers.ModelSerializer):
    user = serializers.StringRelatedField(many = False)#eta user er name int teke int e convert kore
    class Meta:
        model = models.Patient
        fields = '__all__'