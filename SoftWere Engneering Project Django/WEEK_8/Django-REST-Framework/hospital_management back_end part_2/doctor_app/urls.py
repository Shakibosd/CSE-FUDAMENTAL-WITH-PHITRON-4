from rest_framework.routers import DefaultRouter
from django.urls import path, include

from . import views

router = DefaultRouter() #eta hocce amader router
router.register('list', views.DoctorViewSet,) #router er antinar toiri korlam
router.register('specialization', views.SpecializationViewSet,) #router er antinar toiri korlam
router.register('designation', views.DesignationViewSet,) #router er antinar toiri korlam
router.register('availableTime', views.availableTimeViewSet,) #router er antinar toiri korlam
router.register('review', views.ReviewViewSet,) #router er antinar toiri korlam

urlpatterns = [
    path('',include(router.urls))
]

