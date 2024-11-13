from django.shortcuts import render
from rest_framework import viewsets
from .import models
from .import serializers

class DoctorViewSet(viewsets.ModelViewSet):
    queryset = models.Doctor.objects.all()
    serializer_class = serializers.DoctorSerializers

class SpecializationViewSet(viewsets.ModelViewSet):
    queryset = models.Specialization.objects.all()
    serializer_class = serializers.SpecializationSerializers

class DesignationViewSet(viewsets.ModelViewSet):
    queryset = models.Designation.objects.all()
    serializer_class = serializers.DesignationSerializers

class availableTimeViewSet(viewsets.ModelViewSet):
    queryset = models.availableTime.objects.all()
    serializer_class = serializers.availableTimeSerializers

class ReviewViewSet(viewsets.ModelViewSet):
    queryset = models.Review.objects.all()
    serializer_class = serializers.ReviewSerializers